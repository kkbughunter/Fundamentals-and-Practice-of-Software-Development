#include<stdio.h>
int fact(int num);
int remove0(int fact);

int fact(int num)
{
	long int facta=1,i=1;
	for(i=1; i<=num; i++)
	{
		facta = facta * i;
	}
	return facta;
}

int remove0(int fact)
{
	while (fact%10==0){
		fact = fact / 10;
	}
	return fact%10;
}


int main()
{
	long int n;
	printf("Enter the number : ");scanf("%ld",&n);
	n = fact(n);
	printf("\n\nFactorial = %ld \n",n);
	n = remove0(n);
	printf("The single integer is = %ld\n",n);
	return 0;
}
