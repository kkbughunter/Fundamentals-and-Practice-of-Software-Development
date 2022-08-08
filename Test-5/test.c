
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str[10][10]; 
    int i,j,ctr;

    printf(" Input  a string : ");
    gets(str1);	
 
    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        if(str1[i]==' '||str1[i]=='\0')
        {
            str[ctr][j]='\0';
            ctr++; 
            j=0; 
        }
        else
        {
            str[ctr][j]=str1[i];
            j++;
        }
    }
    for(i=0;i < ctr;i++){
    	 if(strcmp(str[i],str[i+1])==0)
    	 	printf(" %10s --> %d \n",str[i],i+1);
    }
    return 0;
}
