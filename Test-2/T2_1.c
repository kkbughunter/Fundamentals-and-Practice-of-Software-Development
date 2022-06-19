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
	int num=0;
	printf("Enter the number : ");scanf("%d",&num);
	num = fun(num);
	printf("%d",num);
	return 0;
}

int main()
{
    int n,n1;
    printf("Enter the numbers : ");scanf("%d",&n);
    
    n1 = fun(n);
    printf("\nSum of digits : %d\n\n",n1);
    
    n1 = fun(n1);
    printf("\nSum of digits of number : %d\n\n",n1);
    return 0;
}
