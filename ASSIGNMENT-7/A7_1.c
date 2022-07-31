
#include<stdio.h>
#include<string.h>
#include"input.h"
void main()
{FILE*fptr;
	char ip[100],filename[20];
	printf("enter file name ");
	scanf("%s",filename);
	fptr=fopen(filename,"a");
	printf("type \"END\" to stop input\n");
	do
	{
		printf("enter line of text ");
		gets( ip);
		if(strcmp(ip,"END")!=0)
		{ 
			fprintf(fptr,"%s",ip);
			fprintf(fptr,"\n");
		}
		
	}while(strcmp(ip,"END")!=0);
	
	fclose(fptr);
	readinput(filename);
	
}
