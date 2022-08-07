#include <stdio.h>
int checkoddoreven(int num);

int checkoddoreven(int num)
{
    if (num>=0){
        if (num %2 == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
      return -1;
    }
}


int main()
{
    int n=10,result;
    printf("\n\tFind ODD or EVEN number \n");
    loop:
    printf("enter the number:");scanf("%d",&n);
    result=checkoddoreven(n);
    
    if (result ==  1){
        printf("%d is even number\n",n);
    }
    else if(result == 0){
        printf("%d is odd number\n",n);
    }
    else if(result == -1){
        printf(":( Enter positive number\n");
        goto loop;
    }
    else{
        printf(" ");
    }

    return 0;
}



