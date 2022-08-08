// to find the length of the array
int Strlen(char *str)
{
	int length=0;
	char cha=' ';
	while(cha != '\0'){
		cha = str[length];
		length++;
	}
	return length-1;
	
}
// printf("Length of the string is = %d \n",Strlen(str1));



void Strcpy(char str1[], char str2[])
{
	int i=0;
    for (i = 0; str1[i] != '\0'; ++i) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}
// Strcpy(str1,str2);
// printf("The siring is coped to str2 : %s \n",str2);




void UPPER(char *str)
{
	int i=0;
	while(str[i] != '\0'){
		if (str[i] >= 97 && str[i] <=122)
			printf("%c",str[i]-32);
		else printf("%c",str[i]);
		i++;
	}
}

// char str3[]=" Welcome to C Programming.";
// 	printf("The UPPER CASE siring is : ");
// 	UPPER(str3);


void Lower(char *str)
{
	int i=0;
	while(str[i] != '\0'){
		if (str[i] >= 65 && str[i] <=90)
			printf("%c",str[i]+32);
		else printf("%c",str[i]);
		i++;
	}
}

// char str4[]=" WELCOME TO PYTHON PROGRAMMING.";
// 	printf("\nThe UPPER CASE siring is : ");
// 	Lower(str4);


