
#include<stdio.h>
void pull_zero_to_end(int arr[],int sum,int num);

int main ()
{
	int num,i,sum=0;
	printf("enter how many numbers you are going to give :");
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++)
	{
		printf("enter the number%d:", i+1);
		scanf("%d",&arr[i]);
		if(arr[i]==0)
		sum+=1;} 
		pull_zero_to_end(arr,sum,num);
		
	
}
void pull_zero_to_end(int arr[],int sum,int num)
{
	int i=0,j,sum1=0,k;
	while(sum1<=sum)
	{if(arr[i]>0)
		i++;
		else if(arr[i]==0)
		{sum1+=1;
		for(j=i;j<num-1;j++)
		arr[j]=arr[j+1];
		arr[num-1]=0;
		} 
	}
	for(k=0;k<num;k++)
	printf("%d, ",arr[k]);
	printf("\n");
	
	
}
