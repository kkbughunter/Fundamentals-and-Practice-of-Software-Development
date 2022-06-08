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
   
    printf("enter the number:");scanf("%d",&n);
    result=checkoddoreven(n);
    
    if (result ==  1){
        printf("it is an even number");
    }
    else if(result == 0){
        printf("it is an odd number");
    }
    else if(result == -1){
        printf("enter positive number");
    }
    else{
        printf(" ");
    }

    return 0;
}
