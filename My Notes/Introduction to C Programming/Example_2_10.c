#include<stdio.h>

void main()
{
    printf("%d \t %d \t %d\n", 50000U, 123456789L, 123456789UL);

    printf("%x \t %x\n", 0xabcd, 07777777U);
    
    printf("%x \t %x\n", 0x50000U, 0XFFFFFUL);
}