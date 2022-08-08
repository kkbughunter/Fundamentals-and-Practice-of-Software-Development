#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 20

void Write_File(FILE *fptr);
void Read_File(FILE *fptr);
void Read_Line(FILE *fptr,int N);
void Write_n_Lines(FILE *fptr,int n);
void Delete_n_Lines(FILE *fprt,char file[],int n);

int main()
{
FILE *fptr;
char ans;
int choice,n,N;
char file[MAX];
ans='Y';
while (ans=='y' || ans=='Y')
{
printf("The operations with the file are:\n");
printf("1.Write contents into file.\n2.Read contents of file.\n3.Read a particular line.\n4.Write n lines into the file.\n5.Delete n lines from file.\n6.Save and Exit.\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch (choice)
{
case 1:
{
printf("Enter the filename :\n");
scanf("%s",file);
fptr=fopen(file,"a");
Write_File(fptr);
fclose(fptr);
break;
}
case 2:
{
printf("Enter the filename :\n");
scanf("%s",file);
fptr=fopen(file,"r");
Read_File(fptr);
fclose(fptr);
break;
}
case 3:
{
printf("Enter the filename :\n");
scanf("%s",file);
printf("Enter the line number to be read from the file:");
scanf("%d",&N);
fptr=fopen(file,"r");
Read_Line(fptr,N);
fclose(fptr);
break;
}
case 4:
{
printf("Enter the filename :\n");
scanf("%s",file);
printf("Enter number of lines to be entered:");
scanf("%d",&n);
fptr=fopen(file,"a");
Write_n_Lines(fptr,n);
fclose(fptr);
break;
}
case 5:
{
printf("Enter the filename :\n");
scanf("%s",file);
printf("Enter number of lines to be deleted:");
scanf("%d",&n);
fptr=fopen(file,"r");
Delete_n_Lines(fptr,file,n);
fclose(fptr);
break;
}
case 6:
{
exit(-1);
}
default:
{
printf("Invalid choice entered. Enter 1-5:\n");
}
}
printf("Enter y/n to continue file operations or stop:");
scanf(" %c",&ans);
}
return 0;
}

void Write_File(FILE *fptr)
{
char *line;
line=(char*)malloc(80*sizeof(char));
if (fptr == NULL)
{
printf("Error in opening the file \n");
}
else
{
printf("Enter the lines to be entered into the file(Press END to stop:\n");
gets(line);
while (strcmp(line,"END")!=0)
{
fprintf(fptr,"%s\n",line);
gets(line);
}
}
printf("Written succesfully into the file.\n");
return;
}

void Read_File(FILE *fptr)
{
if (fptr == NULL)
{
printf("Error in opening the file \n");
}
else
{
char line[1000];
printf("The contents of the file are:\n");
while (fgets(line,1000,fptr) != NULL)
{
printf("%s\n",line);
}
}
return;
}

void Read_Line(FILE *fptr,int N)
{
if (fptr == NULL)
{
printf("Error in opening the file \n");
}
else
{
int i=1;
char line[1000];
while (N<=0)
{
printf("Invalid line number entered.Please enter again:\n");
scanf("%d",&N);
}
while (fgets(line,1000,fptr) != NULL)
{
if (i==N)
{
printf("%s",line);
return;
}
i++;
}
printf("The line number %d not available.\n",N);
}
return;
}

void Write_n_Lines(FILE *fptr,int n)
{
char line[1024];
int i=0;
if (fptr == NULL)
{
printf("Error in opening the file \n");
}
else
{
while (n<=0)
{
printf("Invalid number of lines entered.Please enter again:\n");
scanf("%d",&n);
}
printf("Enter the lines to be entered into the file :\n");
for(i=0;i<=n;i++)
{
gets(line);
fprintf(fptr,"%s\n",line);
}
}
printf("Written succesfully into the file.\n");
return;
}

void Delete_n_Lines(FILE *fptr,char file[],int n)
{
int i=0;
char line[1024],content[1024*MAX]="";
if (fptr == NULL)
{
printf("Error in opening the file \n");
}
else
{
while (n<=0)
{
printf("Invalid number of lines entered.Please enter again:\n");
scanf("%d",&n);
}
while (fgets(line,1024,fptr) != NULL)
{
if (i>=n) strncat(content,line,strlen(line));
i++;
}
fclose(fptr);
fptr=fopen(file,"w");
fprintf(fptr,"%s",content);
fclose(fptr);
printf("The lines are delelted.\n");
}
}
