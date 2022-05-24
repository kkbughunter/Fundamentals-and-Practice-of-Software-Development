//8) Implement the solution for (1) without a condition?!

#include<stdio.h>
int main()
{
    int num;
    do{
        printf("Enter the Number : \b");
        scanf("%d",&num);
        if (num>0 && num<2001){
            if (num % 2 == 0){
                printf("%d is even number.\n",num);
            }
            else{
                printf("%d is odd number.\n",num);
            }
        }
        else{
            printf("Enter the Valid Number.\n");
            num=0;
        }
    }while( num==0 );
    return 0;
}