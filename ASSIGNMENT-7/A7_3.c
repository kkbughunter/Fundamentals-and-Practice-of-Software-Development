#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int *argc,char *argv[])
{
	FILE *fptr1,*fptr2; 
	char c;
	char text[200];
	fptr1=fopen(argv[1],"w");
	if(fptr1==NULL)
	{
		printf("error in opening file");
		exit(0);
	}
	
	else
		do{printf("enter text");
			gets(text);
			if(strcmp(text,"END")!=0)
				fprintf(fptr1,"%s",text);
			fprintf(fptr1,"\n");
			
			
		}while(strcmp(text,"END")!=0);
	fclose(fptr1);
	fptr1=fopen(argv[1],"r");
	fptr2=fopen(argv[2],"w");
	while((c=getc(fptr1))!=EOF)
	{
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		{  fprintf(fptr2,"z");
			printf("z");
		}
		else
		{fprintf(fptr2,"%c",c);
			printf("%C",c);
		}
	}
	
	
}
