#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int replaceword(char line[],char str[], char replacest[]);
void main()
{
	FILE*fptr1,*fptr2;
	char line[500],replace[20],key[20];
	int result;
	printf("enter text : ");
	gets(line);
	if((fptr1=fopen("orginal_text.txt","w"))==NULL)
	{
		printf("error in opening file");
		exit(0);
	}
	fprintf(fptr1,"%s",line);
	fclose(fptr1);
	printf("key word : ");
	scanf("%s",key);
	printf("enter replace word");
	scanf("%s",replace);
	result=replaceword(line,key,replace);
	fptr2=fopen("new_file.txt","w");
	if(result==0)
	{printf("no occurane");
		fprintf(fptr2,"%s",line);   
	}
	else
	{printf("%s   is the replaced txet",line );
		fprintf(fptr2,"%s",line);
		printf("\n\nand replaced text is stored in [new_file.txt]\n");
	}
	fclose(fptr2); 
	
}

int replaceword(char line[],char str[], char replacest[])
{
	int i, j, k, count, countot=0, len, len1, l,len2, m;
	len2=strlen(replacest);
	len1=strlen(str);
	len=strlen(line);
	
	for(i=0;i<len;i++)
	{
		j=i;
		count=0;
		while(line[j]!=' '&&line[j]!='\0' )
		{
			++count;
			++j;
		}
		if(len1==count)
		{
			for(k=0;k<len1;k++)
			{
				if(str[k]!=line[i+k])
					break;
				else if(k+1==len1)
				{ countot+=1;
					if(len1>len2)
					{
						for(l=0;l<len2;l++)
							line[i+l]=replacest[l];
						for(m=i+len2;m<len;m++)
							line[m]=line[m+len1-len2];
						
						
					}
					else if(len1<len2)
					{
						for(l=len+(len2-len1);l>i+len1;l--)
							line[l]=line[l-(len2-len1)];
						for(m=0;m<len2;m++)
							line[i+m]=replacest[m];
						
					}
					else
						for(l=0;l<len1;l++)
							line[i+l]=replacest[l];
						
				}
			}
		}
		i+=count;} 
		if(countot==0)
			return countot;
		
		
}
