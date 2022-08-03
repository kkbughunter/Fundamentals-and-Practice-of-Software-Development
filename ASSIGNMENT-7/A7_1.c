#include<stdio.h>
#include<string.h>
#include"input.h"
int main()
{
	char filename[20];
	printf("enter file name ");
	scanf("%s",filename);
	readinput(filename);
	return 0;
	
}
