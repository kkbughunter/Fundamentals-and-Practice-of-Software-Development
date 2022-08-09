//3) Modify (1) to set a flag to 1 if number is odd; 0 if even (Use conditional operator)
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number : \b");
    scanf("%d",&num);
    (num % 2 == 0) ? printf("%d is EVEN Number.\n",num) : printf("%d is ODD Number.\n",num);
    return 0;
}
