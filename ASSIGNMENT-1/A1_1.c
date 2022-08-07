
#include <stdio.h>
int main()
{
	int num1,num2,answer,operand;
	printf("Addition(1)\nSubtraction(2)\nMultiply(3)\nDivision(4)\n");
	printf("Enter the option ");scanf("%d",&operand);
	printf("Enter the num1 : ");scanf("%d",&num1);
	printf("Enter the num2 : ");scanf("%d",&num2);
	if (operand==1){
	answer=num1+num2;
	}
	else if (operand==2){
	answer=(num1-num2);
	}
	else if (operand==3){
	answer=(num1*num2);
	}
	else if (operand==4){
	answer=(num1/num2);
	}
	else{
	printf("invalid input\n");
	}
printf("%d\n",answer);
}
