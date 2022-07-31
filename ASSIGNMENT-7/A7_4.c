#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void seekfun(int middle,int offset,char filename[]);
void main()
{ int middle,offset,i=1;
	FILE*fptr;
	char ip[100],filename[20];
	printf("enter file name : ");
	scanf("%s",filename);
	fptr=fopen(filename,"w");
	printf("type \"END\" to stop input\n");
	do{
		printf("enter line of text : ");
		gets(ip);
		if(strcmp(ip,"END")!=0)
		{
			fprintf(fptr,"%s",ip);
			fprintf(fptr,"\n");
		}
	}while(strcmp(ip,"END")!=0);
	fclose(fptr);
	
	while(i)
	{
		printf("enter middle : ");
		scanf("%d",&middle);
		printf("enter offset : ");
		scanf("%d",&offset);
		if(middle<offset)
			printf("middle value should be greater than offset\nso correctly enter numbers ");
		else
			--i;
	}
	seekfun(middle,offset,filename);
}
void seekfun(int middle,int offset,char filename[])
{
	int count=middle-offset;
	char c,filename1[20];
	FILE*fptr2,*fptr;
	printf("enter the output saving file name : ");
	scanf("%s",filename1);
	fptr=fopen(filename,"r");
	if(fptr==NULL)
	{
		printf("error in opening input entered file ");
		exit(0);
	}
	fseek(fptr,middle-offset,0);
	fptr2=fopen(filename1,"w"); 
	if(fptr2==NULL)
	{
		printf("error in opening file opening in which output is output going to be placed ");
		exit(0);
	}
	while((c=getc(fptr))!=EOF&&count<=middle+offset)
	{
		count++;
		printf("%c",c);
		fprintf(fptr2,"%c",c);
	}
	printf("\n");
	fclose(fptr2);
	fclose(fptr);
	printf("(and output is stored in [%s] file\n)",filename1);
}
