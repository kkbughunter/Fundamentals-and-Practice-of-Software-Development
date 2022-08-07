
#include<stdio.h>
int main()
{
	int vert,m=0,n,o,num,i,j,l,u;
	printf("enter how many number your are going to give : ");
	scanf("%d",&vert);
	int a1[vert],a2[]={0,0,0,0,0,0,0,0,0,0};
	while(m<vert)
	{
		printf("enter the number %d : ", m+1);
		scanf("%d",&num);
		if(num<0||num>10)
		{
			printf("enter number between 0 to 9\n");
			continue;
		}
		else
		a1[m]=num;
		m++;
	}
	
	for(n=0;n<=9;n++)
	{for(o=0;o<vert;o++)
	{
		if(n==a1[o])
		  a2[n]+=1;
	}		  
	}
	printf("\n");
	for(i=vert;i>0;i--)
	{
		for(j=0;j<=9;j++)
		{
			if(i==a2[j])
			{
				printf("* ");
				a2[j]-=1;
			}
			else
			{
				printf("  ");
			}
		} printf("|%d time",i);
		printf("\n");
	}
	for(u=1;u<=10;u++)
	printf("__");
	printf("\n");
    for(l=0;l<10;l++)
    printf("%d ",l);

	
}
