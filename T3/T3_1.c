#include <stdio.h>
 
int pushZerosToEnd(int A[], int n,int B[])
{
    int count=0,i,j,temp=0;
 
    for (int i=0; i<=n; i++){
        if(A[i]==1){
            count++;
        }
    }
    while (temp<count){
        B[temp++]=1;
    }
    while(count<=n){
        B[count++]=0;
    }
    return 1;
    
}

int main()
{
    int A[10];
    int B[]={0,0,0};
    int N,element;
    printf("Enter no of elements");
    scanf("%d",&N);
    
    for(int i=0; i<N;i++ ){
        scanf("%d",&element);
        A[i]=element;
    }
    int n=N-1;
    pushZerosToEnd(A, n,B);
    for(int j=0;j<=n;j++){
        printf("%d ",B[j]);
    }
    printf("\n");
    
    return 0;
}
