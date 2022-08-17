#include<stdio.h>

void main()
{
    printf("%c","w"); // in this case there is no NULL ('\0') in last becouse of this is a character constant.
    printf("%s","\tTo continue, press the \"RETURN\" key\n"); // in this case the lost character is '\0' NULL  becouse of this is a string constant.
}