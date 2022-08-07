#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <ctype.h>
struct piggen
{	char english[80],piglatin[80];
	int words;
}; 
void initialize(struct piggen *ptr); 
void readinput(char english[]); 
int countwords(char english[]); 
void convert(struct piggen *ptr);
void writeoutput(char piglatin[]); 
void main( )
{	struct piggen line; 
	printf("Welcome to the Piglatin Generator\n\n"); 
	printf ( "Type \' END\' when finished\n\n") ; 
	do { 
	initialize(&line);
	readinput(line.english); 	
	if (toupper(line.english[0]) == 'E' && toupper(line.english[1]) =='N' && toupper(line.english[2])=='D') 
		break;
 	line.words=countwords(line.english); 
	convert(&line);
	printf("\nOriginal text:\n"); 
	writeoutput(line.english);
	printf("\nPiglatin :\n") ;
	writeoutput(line.piglatin);
	}while(line.words>=0); 
	printf ("\naveHa aa icena ayda (Have a nice day)\n"); 
} 
 
void initialize(struct piggen *ptr) 
{ 
	int count; 
	for(count = 0; count<80;++count) 
		ptr->english[count]=ptr->piglatin[count]=' '; 
}
void readinput(char english[]) 
{ 
	int count = 0; 
	char c; 
	while ((c = getchar())!='\n') 
	{ 	english[count] = c; 
		++count;
	}
	return;
} 
int countwords(char english[]) 
{ 
	int count, words = 1; 
	for (count = 0; count<79; ++count) 
		if (english[count] == ' ' && english[count + 1]!=' ') 
			++words; 
	return(words); 
}
 
void convert(struct piggen *ptr) 
{ 	char sound2[38][3]={"bl","oh","br","ch","ck","cl","cr","dr","fl","fr","gh", "gl", "gr","ng","ph","pl","pr","qu","sc","sh","sk", "sl","sm","sn","sp","st","sw","th","tr","tw","wh","wr"};
    char punctuation[10]={'.',',','!',';',':','/','?','-','*','"'};
    char temp[3];
	int n, count; 
	int m1 = 0;
	int m2,i;
	for (n = 1;n<=ptr->words;++n) 
	{	count = m1;
		while (ptr->english[count]!=' ')
			m2 = count++;
		count=m1;
     	temp[0]=ptr->english[count];
        temp[1]=ptr->english[count+1];
        temp[2]='\0';
       	for(i=0;i<38;i++)
       	{	if(strcmp(sound2[i],temp)==0)
       		{	if(isupper(ptr->english[count]))
        		{	ptr->english[count+2]=toupper(ptr->english[count+2]);
        			ptr->english[count]=tolower(ptr->english[count]);
        		}
    			for(count=m1+2;count<=m2;++count)
       				ptr->piglatin[count+n-3]=ptr->english[count];
       			ptr->piglatin[m2+n-2]=temp[0];
       			ptr->piglatin[m2+n-1]=temp[1];
       			ptr->piglatin[m2+n]='a';
        		m1=m2+2;
        		break;
        	}
        }			      
        if(i==38)
        {
        if(isupper(ptr->english[count]))
        	{	
        		ptr->english[count+1]=toupper(ptr->english[count+1]);
        		ptr->english[count]=tolower(ptr->english[count]);
        	}
        for(i=0;i<10;i++)
        	{	if(punctuation[i]==ptr->english[m1])
       				{	ptr->piglatin[count+(n-1)]=ptr->english[count+2];
       					count++;
       					for (;count<m2; ++count)	
							ptr->piglatin[count+(n-1)]=ptr->english[count+2];
						ptr->piglatin[m2+(n-2)] = ptr->english[m1+1];
						ptr->piglatin[m2+(n-1)] = 'a';
						break;
       				}
       		}
       	if(i==10){	
		for (;count<m2;++count)
		{	
			ptr->piglatin[count+(n-1)]=ptr->english[count+1];
		}
		ptr->piglatin[m2+(n-1)] = ptr->english[m1];
		ptr->piglatin[m2 + n] = 'a';}
		m1=m2+2; 
		}}  
} 
void writeoutput(char piglatin[]) 
{ 
	int count = 0; 
	for(count = 0; count < 80; ++count) 
		putchar(piglatin[count]); 
	printf ("\n\n" ) ; 
	return; 
} 
