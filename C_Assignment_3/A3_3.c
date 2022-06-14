#include<stdio.h>
int product(int me);

int product(int me)
{
	
	if (me == 0)
		return 1;
	else{
		int me1;
		printf("Enter the num : ");scanf("%d",&me1);
		return me = me * product(me1);
	}
}


int main()
{
	int num=1;
	printf("To find Product of given number\n");
	num = product(num);
	printf("The Product of given number is : %d \n",num);
	return 0;
}
