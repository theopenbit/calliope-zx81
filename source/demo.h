/*
 * calliope symbol
#define ZXPROG_DEMO_LG 717
const unsigned char zxprog_demo[]={
0x00, 0xF0, 0x00, 0xD6, 0x41, 0xD4, 0x42, 0xD5, 0x42, 0x00, 
0x00, 0xD6, 0x42, 0xD5, 0x41, 0x00, 0x00, 0xD8, 0x42, 0xD8, 
0x42, 0x00, 0x5D, 0x40, 0x00, 0x02, 0x00, 0x00, 0xFF, 0xFF, 
0x00, 0x37, 0xD6, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6B, 
0x0C, 0x00, 0x00, 0x78, 0xB8, 0x00, 0x00, 0xBC, 0x1C, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x88, 0x00, 0x00, 0x00, 0x84, 0xA0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x13, 0x00, 
0xF5, 0x0B, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 
0x6E, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 0x00, 0x1B, 0x1B, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 
0x0B, 0x76, 0x00, 0x78, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 
0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 0x82, 0x13, 0x00, 0xF5, 
0x0B, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 0x8C, 
0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x1B, 
0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x0B, 
0x76, 0x00, 0x96, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 0x1B, 
0x00, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x00, 0x1B, 
0x00, 0x00, 0x0B, 0x76, 0x00, 0xA0, 0x13, 0x00, 0xF5, 0x0B, 
0x00, 0x1B, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 
0x00, 0x00, 0x00, 0x1B, 0x00, 0x0B, 0x76, 0x00, 0xAA, 0x13, 
0x00, 0xF5, 0x0B, 0x17, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 
0x1B, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x17, 0x0B, 0x76, 
0x00, 0xB4, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x1B, 0x00, 0x00, 
0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x1B, 
0x00, 0x0B, 0x76, 0x00, 0xBE, 0x13, 0x00, 0xF5, 0x0B, 0x00, 
0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x00, 0x0B, 0x76, 0x00, 0xC8, 0x13, 0x00, 
0xF5, 0x0B, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 
0xD2, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 0x00, 0x1B, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 
0x0B, 0x76, 0x00, 0xDC, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 
0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 0xE6, 0x13, 0x00, 0xF5, 
0x0B, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 0xF0, 
0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x0B, 
0x76, 0x76, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 
0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 
0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x1B, 
0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x76, 
0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x1B, 
0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 0x00, 0x00, 
0x00, 0x76, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x1B, 0x1B, 0x1B, 
0x1B, 0x1B, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x76, 0x00, 0x1B, 
0x00, 0x00, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x76, 0x17, 0x00, 0x00, 0x00, 0x00, 0x1B, 
0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x17, 0x76, 
0x00, 0x1B, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 
0x00, 0x00, 0x00, 0x1B, 0x00, 0x76, 0x00, 0x00, 0x1B, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 
0x00, 0x76, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 
0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x1B, 
0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x76, 
0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x1B, 0x1B, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x17, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 
0x00, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 
0x1C, 0x18, 0x1E, 0x20, 0x1C, 0x76, 0x80
};
*/

#define ZXPROG_DEMO_LG 833
const unsigned char zxprog_demo[]={
0x00, 0x40, 0x01, 0x20, 0x42, 0x48, 0x43, 0x49, 0x43, 0x00, 
0x00, 0x4A, 0x43, 0x1F, 0x42, 0x00, 0x00, 0x4C, 0x43, 0x4C, 
0x43, 0x00, 0x5D, 0x40, 0x00, 0x02, 0x36, 0x01, 0xFF, 0xFF, 
0x00, 0x37, 0x20, 0x42, 0xFE, 0xFF, 0x00, 0x00, 0x00, 0x6B, 
0x0C, 0x00, 0x00, 0xE5, 0xA2, 0x00, 0x00, 0xBC, 0x1C, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x89, 0x00, 0x00, 0x00, 0x84, 0xA0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x13, 0x00, 
0xF5, 0x0B, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 
0x6E, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 0x00, 0x1B, 0x1B, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 
0x0B, 0x76, 0x00, 0x78, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 
0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 0x82, 0x13, 0x00, 0xF5, 
0x0B, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 0x8C, 
0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x1B, 
0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x0B, 
0x76, 0x00, 0x96, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 0x1B, 
0x00, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x00, 0x1B, 
0x00, 0x00, 0x0B, 0x76, 0x00, 0xA0, 0x13, 0x00, 0xF5, 0x0B, 
0x00, 0x1B, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 
0x00, 0x00, 0x00, 0x1B, 0x00, 0x0B, 0x76, 0x00, 0xAA, 0x13, 
0x00, 0xF5, 0x0B, 0x17, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 
0x1B, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x17, 0x0B, 0x76, 
0x00, 0xB4, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x1B, 0x00, 0x00, 
0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x1B, 
0x00, 0x0B, 0x76, 0x00, 0xBE, 0x13, 0x00, 0xF5, 0x0B, 0x00, 
0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x00, 0x0B, 0x76, 0x00, 0xC8, 0x13, 0x00, 
0xF5, 0x0B, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 
0xD2, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 0x00, 0x1B, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 
0x0B, 0x76, 0x00, 0xDC, 0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 
0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 0xE6, 0x13, 0x00, 0xF5, 
0x0B, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x0B, 0x76, 0x00, 0xF0, 
0x13, 0x00, 0xF5, 0x0B, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x0B, 
0x76, 0x01, 0x2C, 0x04, 0x00, 0xF5, 0x0B, 0x0B, 0x76, 0x01, 
0x36, 0x0C, 0x00, 0xF5, 0x0B, 0x28, 0x26, 0x31, 0x31, 0x2E, 
0x34, 0x35, 0x2A, 0x0B, 0x76, 0x01, 0x40, 0x0F, 0x00, 0xF5, 
0x0B, 0x00, 0x00, 0x00, 0x2A, 0x32, 0x3A, 0x31, 0x26, 0x39, 
0x2A, 0x38, 0x0B, 0x76, 0x01, 0x4A, 0x1B, 0x00, 0xF5, 0x0B, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x38, 0x2E, 0x33, 0x28, 0x31, 0x26, 0x2E, 0x37, 0x00, 0x3F, 
0x3D, 0x24, 0x1D, 0x0B, 0x76, 0x76, 0x00, 0x00, 0x00, 0x17, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 
0x00, 0x76, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 
0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x76, 
0x00, 0x00, 0x00, 0x1B, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 
0x00, 0x1B, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x1B, 0x00, 
0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x00, 0x1B, 0x00, 
0x00, 0x76, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x1B, 
0x1B, 0x1B, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x76, 0x17, 0x00, 
0x00, 0x00, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x00, 
0x00, 0x00, 0x17, 0x76, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x1B, 
0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x76, 
0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1B, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x1B, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 
0x00, 0x76, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 
0x00, 0x1B, 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x00, 0x1B, 
0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00, 0x76, 
0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x17, 0x00, 0x00, 0x00, 0x76, 0x76, 0x28, 0x26, 0x31, 
0x31, 0x2E, 0x34, 0x35, 0x2A, 0x76, 0x00, 0x00, 0x00, 0x2A, 
0x32, 0x3A, 0x31, 0x26, 0x39, 0x2A, 0x38, 0x76, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x2E, 
0x33, 0x28, 0x31, 0x26, 0x2E, 0x37, 0x00, 0x3F, 0x3D, 0x24, 
0x1D, 0x76, 0x76, 0x76, 0x76, 0x76, 0x1C, 0x18, 0x1F, 0x1F, 
0x1C, 0x76, 0x80
};
