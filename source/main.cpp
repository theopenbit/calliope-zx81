/**
 * 
 * a simple zx81 emulator for the calliope mini
 * port of https://github.com/jjmz/esp8266-zx81
 * 
 * c 2017 theOpenBit
 * GPL 3.0
 * 
 */

#include "MicroBit.h"
#include "./z80emu/z80emu.h"

MicroBit uBit;
unsigned char RAM[RAMSIZE];
const unsigned char ROM81[8192]={
#include "./open81.h"
};

unsigned char kbd_table[8];		// 0->FE, 1=>FD, .. 7=>7F
volatile unsigned int slow=0;
bool shift = 0;
bool dumpmode=0;
char prog_to_load=0;

Z80_STATE state;
char conv[]=" ..........\"$$:?()<>=+-*/;,.0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
unsigned char output[300];//35


void charToHex(char byte, char *hexstr)
{    
    int a = byte&0x0f;
    int b = (byte>>4)&0x0f;
    hexstr[0] = (b<10)?48+b:65+(b-10);    
    hexstr[1] = (a<10)?48+a:65+(a-10);
}

void keyConversion(char c){
/*
# := SHIFT toggle
 { '#':(0,254), 'z':(0,253), 'x':(0,251), 'c':(0,247), 'v':(0,239),
         'a':(1,254), 's':(1,253), 'd':(1,251), 'f':(1,247), 'g':(1,239),
         'q':(2,254), 'w':(2,253), 'e':(2,251), 'r':(2,247), 't':(2,239),
         '1':(3,254), '2':(3,253), '3':(3,251), '4':(3,247), '5':(3,239),
         '0':(4,254), '9':(4,253), '8':(4,251), '7':(4,247), '6':(4,239),
         'p':(5,254), 'o':(5,253), 'i':(5,251), 'u':(5,247), 'y':(5,239),
         '\n':(6,254),'l':(6,253), 'k':(6,251), 'j':(6,247), 'h':(6,239),
         ' ':(7,254), '.':(7,253), 'm':(7,251), 'n':(7,247), 'b':(7,239) }

*/
   
    //line 0 '/':(0,254), 'z':(0,253), 'x':(0,251), 'c':(0,247), 'v':(0,239),
      
    if (c == '#'){        
        if (!shift){
           
                shift= 1;
        }else{
           
                shift=0;
        }        
    }
    if (c == 'z'){        
         kbd_table[0]=253;         
    }
    if (c == 'x'){              
         kbd_table[0]=251;         
    }
    if (c == 'c'){               
         kbd_table[0]=247;         
    }
    if (c == 'v'){               
         kbd_table[0]=239;         
    }
    if (shift){
       kbd_table[0]=kbd_table[0] & 254;                            
    }else{
       kbd_table[0]=kbd_table[0] & 255;                                    
    }
    //line 1  'a':(1,254), 's':(1,253), 'd':(1,251), 'f':(1,247), 'g':(1,239),
    if (c == 'a'){        
        kbd_table[1]=254;         
    }
    if (c == 's'){        
         kbd_table[1]=253;         
    }
    if (c == 'd'){        
        kbd_table[1]=251;         
    }
    if (c == 'f'){        
        kbd_table[1]=247;         
    }
    if (c == 'g'){        
        kbd_table[1]=239;         
    }
    
    //line 2  'q':(2,254), 'w':(2,253), 'e':(2,251), 'r':(2,247), 't':(2,239),
    if (c == 'q'){        
        kbd_table[2]=254;         
    }
    if (c == 'w'){        
        kbd_table[2]=253;         
    }
    if (c == 'e'){        
        kbd_table[2]=251;         
    }
    if (c == 'r'){        
        kbd_table[2]=247;         
    }
    if (c == 't'){        
        kbd_table[2]=239;         
    }

    //line 3  '1':(3,254), '2':(3,253), '3':(3,251), '4':(3,247), '5':(3,239),
    if (c == '1'){        
        kbd_table[3]=254;         
    }
    if (c == '2'){        
        kbd_table[3]=253;        
    }
    if (c == '3'){
        kbd_table[3]=251;         
    }
    if (c == '4'){        
        kbd_table[3]=247;         
    }
    if (c == '5'){        
        kbd_table[3]=239;         
    }     
    
    //line 4 '0':(4,254), '9':(4,253), '8':(4,251), '7':(4,247), '6':(4,239),
    if (c == '0'){        
        kbd_table[4]=254;         
    }
    if (c == '9'){        
        kbd_table[4]=253;         
    }
    if (c == '8'){        
        kbd_table[4]=251;         
    }
    if (c == '7'){        
        kbd_table[4]=247;         
    }
    if (c == '6'){       
        kbd_table[4]=239;         
    }     
    
    //line 5 'p':(5,254), 'o':(5,253), 'i':(5,251), 'u':(5,247), 'y':(5,239),
    if (c == 'p'){
        uBit.display.print("*");
        kbd_table[5]=254;
        
    }
    if (c == 'o'){        
        kbd_table[5]=253;    
    }
    if (c == 'i'){        
        kbd_table[5]=251;        
    }
    if (c == 'u'){        
        kbd_table[5]=247;        
    }
    if (c == 'y'){        
        kbd_table[5]=239;
    }          
    //line 6 '\n':(6,254),'l':(6,253), 'k':(6,251), 'j':(6,247), 'h':(6,239),
    if (c == 0x0d){               
        kbd_table[6]=254;         
    }
    if (c == 'l'){        
        kbd_table[6]=253;         
    }
    if (c == 'k'){        
        kbd_table[6]=251;         
    }
    if (c == 'j'){
        kbd_table[6]=247;
    }
    if (c == 'h'){        
        kbd_table[6]=239;    
    }               
    //line 7 ' ':(7,254), '.':(7,253), 'm':(7,251), 'n':(7,247), 'b':(7,239)
    if (c == ' '){        
        kbd_table[7]=254;         
    }
    if (c == '.'){        
        kbd_table[7]=253;         
    }
    if (c == 'm'){        
        kbd_table[7]=251;         
    }
    if (c == 'n'){        
        kbd_table[7]=247;         
    }
    if (c == 'b'){        
        kbd_table[7]=239;         
    }               
    
}


void displayLoop(){
        //display                    
        int startAddress;
        Z80_FETCH_WORD(0x400c, startAddress);
        uBit.serial.send("\033[2J");               
        int c=0;
        Z80_READ_BYTE(startAddress,c);
        if (c==118){
            startAddress++;
        }
        
        for (int x= 0; x<24; x++){
            int outpos=0;
            for(int y = 0; y < 33; y++){                    
                int c;
                Z80_READ_BYTE(startAddress,c);
                if (c==118){
                    startAddress++;
                    break;
                }
                if(c&128){
                    output[outpos]='\33';                
                    outpos++;
                    output[outpos]='[';                
                    outpos++;
                    output[outpos]='7';                
                    outpos++;
                    output[outpos]='m';                
                    outpos++;
                    output[outpos]=conv[c&63];  
                    outpos++;
                    output[outpos]='\33';                
                    outpos++;
                    output[outpos]='[';                
                    outpos++;
                    output[outpos]='0';                
                    outpos++;
                    output[outpos]='m';                                    
                }else{
                    output[outpos]=conv[c&63];                
                }
                startAddress++;
                outpos++;
            }
            output[outpos]='\r';                  
            outpos++;
            output[outpos]='\n';
            uBit.serial.send(output,outpos+1);
            
        }
        
       

}

void emulationLoop(){
        if (slow) { 
            Z80Emulate(&state, 40000);
            uBit.sleep(15); 
                
        } else {
            Z80Emulate(&state, 100000);
        }
     
    
}

void dumpRam(){
    //dump the basic program 
    uBit.serial.send("\033[2J");           
    int startAddress = 0x4009;    
    int endAddress;    
    int i = 0;    
    Z80_FETCH_WORD(0x4014, endAddress);    
    int proglength = endAddress-startAddress;
    uBit.serial.send(proglength);
    uBit.serial.send("\r\n");
    while (startAddress < endAddress){
        unsigned char b;
        Z80_READ_BYTE(startAddress,b);
        char hexstr [3]={0,0,0};               
        charToHex(b, hexstr);
        uBit.serial.send("0x");  
        uBit.serial.send(hexstr);  
        uBit.serial.send(", "); 
        startAddress++;
        if(i == 9){
           uBit.serial.send("\r\n");
           i=0;
        }else{
            i++;
        }
    }
}

void displayProgamMenu(){
    uBit.serial.send("\033[2J"); 
    uBit.serial.send("################################################################\r\n"); 
    uBit.serial.send("##   Choose program that will be loaded on 'LOAD ""' command  ##\r\n"); 
    uBit.serial.send("################################################################\r\n");
    uBit.serial.send("##   0 - DEMO Screen 'Calliope goes ZX81'                     ##\r\n"); 
    uBit.serial.send("##   1 - Game 'Slotmachine'                                   ##\r\n"); 
    uBit.serial.send("##   2 - Sinus curve                                          ##\r\n"); 
    uBit.serial.send("##   3 - Fibonacci numbers                                    ##\r\n"); 
    uBit.serial.send("################################################################\r\n"); 
    prog_to_load = uBit.serial.read(1).charAt(0);
    
}


void keyboardLoop(){
    
        //input           
        char data = uBit.serial.read(1,ASYNC).charAt(0);
        if(data == 0x0d) {
            uBit.display.print("nl");
        } else{
            uBit.display.print(data);
        }
        if(data =='+'){
            uBit.display.print("fast mode");
            slow=0;
        } else if(data =='-'){
            uBit.display.print("slow mode");                
            slow=1;
        } else if(data == '^'){
            if(dumpmode){
                uBit.display.print("stop dump mode");
                dumpmode=0;
            }else{
                uBit.display.print("start dump mode");
                dumpmode=1;
                dumpRam();
            }
        } else if (data == '@'){
            uBit.display.print("load");               
            displayProgamMenu();
        }else  if (data > 0) {    
                uBit.display.print("~");               
                keyConversion(data);
            
            
        }
    
}





int main() {
    
        //init
	uBit.init();        
        uBit.display.print("Calliope goes ZX81");
        uBit.serial.send("Z80 Reset\r\n");
        Z80Reset(&state);       
        uBit.serial.send("starting ZX81 Emulator...\r\n");
        for(int i=0;i<8;i++) kbd_table[i]=0xff;
        
        
        while(1){
          if(dumpmode){
            //no computeing while dumping ram
            keyboardLoop();    
            uBit.rgb.setColour(0, 255, 0, 25);
            
          }else {
            //indicates active shift
            if (shift){
                uBit.rgb.setColour(255, 0, 0, 25);
            }else{            
                uBit.rgb.setColour(0, 0, 255, 25);
            }
            displayLoop();
            keyboardLoop();
            for(int i=0;i<10;i++){
                emulationLoop();            
                //char deboun=0;
                //Z80_READ_BYTE(0x4027,deboun);
                //if(deboun == 0){                
                    //break;
                //}
            }
            //clear keyboard
            for(int i=0;i<8;i++) kbd_table[i]=0xff;
          }                    
        }
}
        
       


