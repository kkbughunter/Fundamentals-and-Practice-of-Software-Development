#include<stdio.h>
#include<string.h>
int frequency(char line[],char str[]);
int main ()
{ int res;
	char line[100],str[10];
	printf("enter line of text :");
	gets(line);
	printf ("enter word :");
	scanf("%s",str);
	res=frequency(line,str);
	printf("%d",res);
	
	
}
int frequency(char line[],char str[])
{
	int i, j, k, count,pcount=0, len, *countot, len1;
	countot=&pcount ;
	
	
	len1=strlen(str);
	len=strlen(line);
	
	for(i=0;i<len;i++)
	{
		j=i;
		count=0;
		while(*(line+j) !=' '&&*(line+j) !='\0' )
		{
			++count;
			++j;
		}
		if(len1==count)
		{
			for(k=0;k<len1;k++)
			{
				if(*(str+k) !=*(line+i+k) )
					break;
				else if(k+1==len1)
					*countot+=1;
			}
		}
		i+=count;
	}
	return *countot;
}
