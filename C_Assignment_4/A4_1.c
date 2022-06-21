#include<stdio.h>
int main()
{
	int count=0,i=0,j=0;
	printf("Enter the Number : ");scanf("%d",&count);
	int arr[count+1],harr[10]={0,0,0,0,0,0,0,0,0,0};
	
	//input field
	for (i=0; i<=count; i++){
		do{
		printf("Enter the input (1 to 9) : %d = ",i+1);scanf("%d",&arr[i]);
	}while(arr[i]<0 || arr[i]>10);
	}

	for (i=0;i<=count;i++){
		int a;
		a = arr[i];
		harr[a]+=1;
	}

	
	
	return 0;
}
//output 
//for (i=1; i<=9; i++){
//		for (j=0; j<harr[i];j++){
//			printf("*");
//		}
//		printf("\n");
//	}
