#include<stdio.h>
int fun(int num);

int fun(int num){
	int n=0,sum=0;
	if (num == 0)
		return 0;
	else{
		n = num %10;
		return sum = n + fun(num/10);
	}
	
}


int main()
{
    int n,n1;
    printf("Enter the numbers : ");scanf("%d",&n);
    while(n>9){
		n = fun(n);
		printf("\nSum of digits : %d\n\n",n);
	}
    return 0;
}
