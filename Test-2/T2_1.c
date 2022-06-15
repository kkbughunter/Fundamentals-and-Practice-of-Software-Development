// question 1
#include<stdio.h>
int Add_Dig(int num);
int Add_Ans_Dig(int n);

int Add_Dig(int num)
{
    int sum = 0;
    while(num>0){
        sum = sum + (num % 10 );
        num = num / 10;
    }
    return sum;
}


int Add_Ans_Dig(int n)
{
    int sum1 = 0;
    while(n>0){
        sum1 = sum1 + (n % 10);
        n = n / 10;
    }
    return sum1;
}


int main()
{
    int n,n1;
    printf("Enter the numbers : ");scanf("%d",&n);
    
    n1 = Add_Dig(n);
    printf("\nSum of digits : %d\n\n",n1);
    
    n1 = Add_Ans_Dig(n1);
    printf("\nSum of digits of number : %d\n\n",n1);
    return 0;
}
