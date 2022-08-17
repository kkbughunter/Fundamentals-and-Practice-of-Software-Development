#include<stdio.h>

void main()
{
    int num1, num2, sum;
    printf("Enter the two integer values to be added");
    scanf("%d %d",&num1, &num2);
    sum = num1 + num2 ;
    printf("Addition of %d and %d = %d\n", num1, num2, sum);
}