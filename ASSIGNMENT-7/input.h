#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void readinput(char filename[]);

void readinput(char filename[])
{
	FILE*fptr;
	char ip[100];
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
	return ;
}