#include<stdio.h>
#include<time.h>
#include<stdlib.h>
struct date{
	int d,m,y;
};
struct student{
	int rollnumber, rank, age;
	float marks[5],totalmarks;
	char name[20];
	struct date dob;
	
};
void readinput(int*date,int*month,int*year)
	{
		int i=1;
		while(i)
		{
			printf("enter year :");
	               scanf("%d",year);
	               printf("%d year\n",*year);
	               if(*year<1900) 
	               
               		printf("enter year correctly");
               	else
               	         --i;
               	
		}
		while(i==0)
		{
			printf("enter month : ");
	               scanf("%d",month);
	               printf("%d month\n", *month);
	               if(*month>12||*month<1) 
               		printf("enter correct month");
                      else
                             i++;
                } 
                      
                   while(i)
               	{
               		printf("enter day : ");
               		scanf("%d",date);
        
                       if(*month==2)
               	      {
               	      	
               	          if(*year%400==0||(*year%4==0&&*year%100!=0))
                                    {
                                    	if(*date<=29) 
                     		             --i;
                     		       else 
                     		             printf("enter correct date");
                                    }
                                    else{
                                    	if(*date<=29)
                                    	--i;
                                    	else printf("enter correct date");
                                    }
                            } 
                     else if(*month==4||*month==6||*month==9||*month==11)
                            {
                                      if(*date<=30) 
                                          i--;
                                      else printf("enter correct date");
                            }
            
                       else if(*month==1||*month==3||*month==5||*month==7||*month==8||*month==10||*month==12)
                                    {  if (*date<=31)
                                          i--;
                                      else printf("enter correct date");
                                     }
						}
    
    
    
 }
 void rank(int n,struct student students[])
{
  int i, j,count;
  struct student temp;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    if(students[i].totalmarks<students[j].totalmarks)
    {
      temp=students[i];
      students[i]=students[j];
      students[j]=temp;
    }
  }
    j=1;
    for(i=0;i<n;i++)
    {
        count=0;
        students[i].rank=j;
        while(students[i].totalmarks==students[i+1].totalmarks)
        {   count++;
            students[i+1].rank=j;
            i++;
        }
        j+=count+1;
        
    }
}  
int years(struct date d1,struct date d2)
{	int days,sub;
	days=(30.42*(d2.m-1))+d2.d;
	sub=(30.42*(d1.m-1))+d1.d;
	if(d1.m==2)
		sub++;
	else if(d1.m>2 && d1.m<8)
		sub--;
	if(d2.m==2)
		++days;
	else if(d2.m>2 && d2.m<8)
		--days;
	for(int i=d1.y;i<d2.y;i++)
	{
		if(i%4==0 || (i%100==0 && i%400))
			days+=366;
		else
			days+=365;
	}
	days-=sub;
	return (days/365);
} 
 int main()
{
	int n,i,j;
	printf("enter how many student detials you are going to give : ");
	scanf("%d",&n);
	struct date today;
	printf("Enter today\'s date :\n ");
	readinput(&today.d,&today.m,&today.y);
	struct student students[n];
	for(i=0;i<n;i++)
	{
		printf("enter name of student %d :", i+1);
       	scanf("%s", students[i].name);
		printf("enter roll number of %s : ", students[i].name);
		scanf("%d",&students[i].rollnumber);
        students[i].totalmarks=0;
        printf("enter DOB :\n");
        readinput(&students[i].dob.d,&students[i].dob.m,&students[i].dob.y);
        students[i].age=years(today,students[i].dob);          
        students[i].totalmarks=0;
        j=0;
        while(j<5)
		{
			printf("enter mark    [%d]   ", j+1);
			scanf("%f", &students[i].marks[j]);
			if(students[i].marks[j]<0||students[i].marks[j]>100)
			 {
 				 printf(" marks should with in1 to 100 \n");
 			 continue;
 			 } 
 			 students[i].totalmarks+=students[i].marks[j];
 			 j++;
	
		}
      } 
	


	rank(n,students);
    for(i=0;i<n;i++)
        {
          printf("%f - mark\n%d -rollnumber\n%s\n%d- rank\n", students[i].totalmarks,students[i].rollnumber,students[i].name,students[i].rank);
        printf("DOB %d %d %d\n\n ",students[i].dob.d,students[i].dob.m,students[i].dob.y);
        printf("age of %s  %d\n",students[i].name,students[i].age);
        
        }
}
