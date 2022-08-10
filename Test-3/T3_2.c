#include <stdio.h>

int pushZerosToEnd(int A[], int n)
{
    int count=1,i,temp=0;
    
    for (int i=0; i<n; i++){
        if(A[i]==0){
            count++;
        }
    }
    while (temp<count){
        A[temp++]=0;
    }
    while(count<=n){
        A[count++]=1;
    }
    return 1;
    
    
}

int main()
{
    int A[10];
    int N,element;
    printf("Enter no of elements");
    scanf("%d",&N);
    
    for(int i=0; i<N;i++ ){
        scanf("%d",&element);
        A[i]=element;
    }
    int n=N-1;
    
    pushZerosToEnd(A, n);
    for(int j=0;j<=n;j++){
        printf("%d ",A[j]);
    }
    printf("\n");
    
    
    return 0;
}
