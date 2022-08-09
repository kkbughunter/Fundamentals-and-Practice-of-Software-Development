#include<stdio.h>
float product(float me);

float product(float me)
{
	if (me == 0)
		return 1;
	else{
		float me1=1;
		printf("Enter the num : ");scanf("%f",&me1);
		return me = me * product(me1);
	}
}


int main()
{
	float num=1;
	printf("\tTo find Product of given number\n");
	printf("To STOP give 0 #\n");
	num = product(num);
	printf("The Product of given number is : %f \n",num);
	return 0;
}
