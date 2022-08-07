/*a) Modify this program to allow for unequal weighting of the individual exam scores. In
particular, assume that each of the first four exams contributes 15 percent to the final
score, and each of the last two exams contributes 20 percent.
*/
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
                	printf("enter mark of subject %d ", j+1);
                	scanf("%f", &mark[i][j]);
                	if(j<=3)
                	      score+=mark[i][j] *15/100;
                       else
                             score+=mark[i][j] *20/100;
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
