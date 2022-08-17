#include<stdio.h>

void main()
{
// Several valid octal integer constants are shown below.
    int var1 = 0, var2 = 01, var3 = 0743, var4 = 077777;
    printf("%o \t %o \t %o\n", var1, var2, var3);


// The folling octal integer constants are written incorrectly for the reasons stated.
    var1 = 743, var2 = 05280, var3 = 0777.777;
    printf("%o \t %o \t %o\n", var1, var2, var3);
}