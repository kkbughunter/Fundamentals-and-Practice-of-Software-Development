#include<stdio.h>
#include"String.h"

int main()
{
	char str1[]="hello", str2[]="";
	printf("Length of the string is = %d \n",Strlen(str1));


	Strcpy(str1,str2);
	printf("The siring is coped to str2 : %s \n",str2);


	char str3[]=" Welcome to C Programming.";
	printf("The UPPER CASE siring is : ");
	UPPER(str3);


	char str4[]=" WELCOME TO PYTHON PROGRAMMING.";
	printf("\nThe UPPER CASE siring is : ");
	Lower(str4);

	
	printf("\n\n");
	return 0;
}