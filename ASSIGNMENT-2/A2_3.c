#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number : \b");
    scanf("%d",&num);
    (num % 2 == 0) ? printf("%d is EVEN Number.\n",num) : printf("%d is ODD Number.\n",num);
    return 0;
}
