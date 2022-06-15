// Question 2
#include<stdio.h>
int Add_Dig(int n);

int Add_Dig(int n)
{
    int sum = 0;
    while(n>0){
        sum = sum + (n % 10 );
        n = n / 10;
    }
    return sum;
}


int main()
{
    int n;
    printf("Enter the numbers : ");scanf("%d",&n);
    
    n = Add_Dig(n);
    printf("\nSum of digits : %d\n\n",n);
    return 0;
}

