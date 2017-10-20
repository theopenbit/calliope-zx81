# ZX81-Emulator running on calliope mini 

* improved port of the ZX81-Emulator for ESP8266 https://github.com/jjmz/esp8266-zx81
* connect your calliope to your computer
* use a serial terminal software as display (minicom for example)
* install the hex-file in the release folder by dropping it in the calliope drive
* if you want to compile the source you need to install yotta for mbed: http://yottadocs.mbed.com/
* mind the special keyboard of the ZX81. Take a look at http://www.rwapsoftware.co.uk/zx812.html
* the shift key is mapped to ```#```. It's a toggle. If 'shift' is active the color of the rgb-led is red.
* this is the used zx81 basic interpreter: https://sourceforge.net/projects/sebasic/
* use key '^' if you want to dump the program memory on screen. 
* using key '@' will open a menu for selecting buildin programs. The choosen program will be loaded by the 'LOAD ""' command

# Demo

Slides explaining an emulator are located in subdir ```slides```.
The slides are compiled by following command:

```
#cd slides/de
#bundle exec asciidoctor-revealjs -r asciidoctor-diagram slides.adoc
```

