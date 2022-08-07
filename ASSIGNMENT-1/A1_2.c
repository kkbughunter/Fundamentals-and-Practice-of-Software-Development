#include <stdio.h>
int main()
	{
	float num1,num2,answer;
	char operand;
	printf("addition(a)\nsubtraction(s)\nmultiply(m)\ndivision(d)\n");
	
	printf("Enter the option ");scanf("%c",&operand);
	printf("Enter the num1 : ");scanf("%f",&num1);
	printf("Enter the num2 : ");scanf("%f",&num2);
	
	if (operand=='a') answer=num1+num2;
	else if (operand=='s') printf("%f\n",num1-num2);
	else if (operand=='m') printf("%f\n",num1*num2);
	else if (operand=='d') printf("%f\n",num1/num2);
	else printf("invalid input");
	
}
