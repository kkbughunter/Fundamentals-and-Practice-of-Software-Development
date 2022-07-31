#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int  individualstr(char line[], char *individual[]);
void printstr(char *individual[], int l);
int main()
{
	char line[100],*individual[100] ;
	int l;
	printf("enter line of text");
	do{
		
		gets(line);
		l=individualstr(line, individual);
		printstr(individual,l); 
		printf("enter line of text (type END TO stop ) :");
	} while(strcmp(line,"END")!=0);
}
int individualstr(char line[], char *individual[])
{
	int i, j, k, l=0,m;
	unsigned int len=strlen(line),count;
	for(i=0;i<100;i++)
	{
		individual[i]=(char*)malloc(20*sizeof(char));
	}
	for(i=0;i<len;i++)
	{
		count=0;
		j=i-1;
		while(*(line+(++j))!=' '&&*(line+j)!='\0')
			count++;
		m=-1;
		for(k=i;k<count+i;k++)
		{
			*(*(individual+l)+(++m))=*(line+k);
		}
		*(*(individual+l)+(++m))='\0';
		l++;
		i+=count;
	}
	return l;
	
}
void printstr(char*individual[], int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		printf("%s\n",individual[i]);
	}
}
