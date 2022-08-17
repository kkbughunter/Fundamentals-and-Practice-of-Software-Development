#include<stdio.h>

void main()
{
// Several valid decimal integer constants are shown below.
    int var1 = 0, var2 = 1, var3 = 743, var4 = 5280, var5 = 32767, var6 = 9999;
    printf("%d \t %d \t %d \t %d \t %d \t %d\n", var1, var2, var3, var4, var5, var6);


// The folling decimal integer constants are written incorrectly for the reasons stated.
    var1 = 12,245, var2 = 36.0, var3 = 10 20 30, var4 = 123-45-6789, var5 = 0900;
    printf("%d \t %d \t %d \t %d \t %d\n", var1, var2, var3, var4, var5);
}