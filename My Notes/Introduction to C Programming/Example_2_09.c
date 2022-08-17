#include<stdio.h>

void main()
{
// Several valid hexadecimal integer constants are shown below.
    printf("%x \t %x \t %x\t %x\n", 0x0, 0x1, 0x7FFF, 0xabcd);


// The folling hexadecimal integer constants are written incorrectly for the reasons stated.
    printf("%x \t %x \t %x\n", 0X, 0BE38, 0x. 4bff);
}