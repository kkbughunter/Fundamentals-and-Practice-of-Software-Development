#include<stdio.h>
int ReverseNum(int num);

int ReverseNum(int num)
{

    int sum = 0;
    while(num>0){
        sum = sum *10 + (num % 10);
        num = num / 10;
    }
    return sum;
}

int main()
{
    int n,result;
    printf("enter the numbers :");scanf("%d",&n);
    n = ReverseNum(n);
    printf("%d\n",n);
    return 0;
}


