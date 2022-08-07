#include <conio.h>
#include<stdio.h>>
#include<math.h>
void main()
{

	int num1,num2,answer,operand;
	printf("addition(1)\nsubtraction(2)\nmultiply(3)\ndivision(4)\nsqrt(5)\n");
	printf("Enter the option : ");scanf("%d",&operand);
	if (operand==5){
		printf("Enter the number : ")scanf("%d",&num1);
		answer=sqrt(num1);
		printf("%d",answer);
	}
	else{
		printf("Enter the num1 : ");scanf("%d",&num1);
		printf("Enter the num2 : ");scanf("%d",&num2);
		switch(operand){
			case 1: answer=(num1+num2);
				break;
			case 2: answer=(num1-num2);
				break;
			case 3: answer=(num1*num2);
				break;
			case 4: answer=(num1/num2);
				break;
			default:answer=0;
		};
	}
	printf("%d\n",answer);
}	
	
