#include <stdio.h>
int sum_odd(int num);
int sum_even(int num);

int sum_odd(int num)
{
    static int odd_sum;
    odd_sum += num;
    return odd_sum;
}
int sum_even(int num)
{
    static int even_sum;
    even_sum += num;
    return even_sum;
}
int main()
{
    int n,result1,result2;
    printf("To exit give -ve values\n");
    while(1){
        printf("enter the number:");scanf("%d",&n);
        if (n%2 == 0)result1 = sum_even(n);
        if (n%2 == 1)result2 = sum_odd(n);
        if (n <= 0)break;
    }
    printf("sum of EVEN numbers = %d\n",result1); 
    printf("sum of ODD numbers = %d\n9",result2); 
    return 0;
}



