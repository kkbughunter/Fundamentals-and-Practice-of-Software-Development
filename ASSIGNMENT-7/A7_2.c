#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main () 
{
	FILE *file,*fptr; 
	int lines=0,spaces=0,charcters=0;
	char ip[100],c,filename[20];
	printf("enter file name ");
	scanf("%s",filename);
	fptr=fopen(filename,"a");
	printf("type \"END\" to stop input\n");
	do{
		printf("enter line of text ");
		gets(ip);
		if(strcmp(ip,"END")!=0)
		{
			fprintf(fptr,"%s",ip);
			fprintf(fptr,"\n");
		}
	}while(strcmp(ip,"END")!=0);
	fclose(fptr);
	file=fopen(filename,"r");
	while(1) 
	{
		if(file==NULL) 
		{
			printf("File Not Found\n");
			exit(0);
		}
		else 
		{
			c=fgetc(file);
			if(c==EOF) 
			{
				break;
				
			}
			if(c==' ') 
			{
				spaces++;
				
			}
			if(c=='\n') 
			{
				lines++;
				
			}
			charcters++;
			
		}
		
	}
	fclose(file);
	printf("No of Charcters=%d\n",charcters);
	printf("No of Spaces=%d\n",spaces);
	printf("No of Lines=%d\n",lines);
	printf("No of words=%d\n",spaces+1);
	
}
