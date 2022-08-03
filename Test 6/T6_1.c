#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insert_string(char *str1, char *str2, char *str, int pos);

void insert_string(char *str1, char *str2, char *str, int pos)
{
	int j=0,i,k=0;
	for(i=0; i<(strlen(str1)+strlen(str2)); i++)
	{
		if(i<pos) *(str+i) = *(str1+(j++));
		else if (i< (j+strlen(str2))) *(str+i) = *(str2+(k++));
		else *(str+i) = *(str1+(j++));
	}

	return ;
}


int main()
{
	char *str1, *str2, *str;
	int pos;

	str = (char*)malloc(30 * sizeof(char));
	str1 = (char*)malloc(30 * sizeof(char));
	str2 = (char*)malloc(30 * sizeof(char));

	printf("Enter the string 1 = ");gets(str1);
	
	printf("Enter the string 2 = ");gets(str2);
	printf("Enter the position = ");scanf("%d",&pos);
	insert_string(str1, str2, str, pos);

	
	printf("\n\nstring   - %s\n",str);
	return 0;
}

