#include<stdio.h>

int main ()
{
	char name[80][80];
	int i,j,n,subject;
	float mark[80][6],average[80], score,totargv=0;
	printf("enter how students you are going to give :");
	scanf("%d", &n);
    printf("enter how many subjects :");
    scanf("%d",&subject);
	
	
	for(i=0;i<n;i++)
	 {  
        score=0;
 		printf("enter name of the student %d :", i+1);
                scanf("%s",name[i]);
              printf("enter marks of %s\n", name[i]); 
                for(j=0;j<subject;j++)
                {
                	printf("enter mark of subject %d :", j+1);
                	scanf("%f", &mark[i][j]);
                	score+=mark[i][j];
                }
                average[i]=score/subject;
                totargv+=average[i];
	}
  for(i=0;i<n;i++)
  {
  	printf("%s              ",name[i]);
  	for(j=0;j<subject;j++)
  	printf("%.0f   ", mark[i][j]);
  	printf("\n%.2f is average mark of %s\n ", average[i],*(name+i));
  	
  }

printf("%f",totargv/n);
	
}
