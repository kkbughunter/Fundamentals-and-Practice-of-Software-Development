#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 20

void Change_Vowel(FILE *fptr);

int main()
{
	FILE *fptr;
	char file[10];
	printf("Enter the file name:");
	scanf("%s",file);
	fptr = fopen(file, "r+");
	if (fptr == NULL)
	{
		printf("Error in opening the file \n");
		exit(-1);
	}
	else
	{
	    Change_Vowel(fptr);
	}
  return 0;
}

void Change_Vowel(FILE *fptr)
{
  char ch,c='z';
  char content[1024*MAX];
  int i=0;
	while ((ch=fgetc(fptr)) != EOF)
	{
	    
    	if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
    	{
    	    strncat(content,&c,1);
    	}
    	else strncat(content,&ch,1);
	}
	fseek(fptr,0,SEEK_SET);
	fprintf(fptr,"%s\n",content);
	fprintf(stdout,"%s",content);
	fclose(fptr);
  return;
}
