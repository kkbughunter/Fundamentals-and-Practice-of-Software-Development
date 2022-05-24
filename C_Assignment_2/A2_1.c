// 1) Check whether the given integer is odd or even

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number : \b");
    scanf("%d",&num);
    // normal if-else
    if (num%2==0){
        printf("%d is EVEN Number.\n",num);
    }
    else{
        printf("%d is ODD Number.\n",num);
    }
    return 0;
}
