#include<stdio.h>

int main()
{
	struct Data{
		int date;
		int month;
		int year;
	};
	
	struct Student{
		int rollnum;
		char name[30];
		int age;
		char gender;
		int marks[6];
		int total;
		int rank;
		struct Data dob;
	};
	int count,i,j,total;
	printf("Enter How many students : ");scanf("%d",&count);
	struct Student Sdata[count+1],temp;
	for (i=0; i<count; i++){
		Sdata[i].total =0;
		printf("\tStudent %d\n",i+1);
		printf("Enter Roll No : ");scanf("%d",&Sdata[i].rollnum);
		gets(Sdata[i].name);
		printf("Enter Name    : ");gets(Sdata[i].name);
		printf("Enter AGE     : ");scanf("%d",&Sdata[i].age);
		scanf("%c",&Sdata[i].gender);
		printf("Enter Gender [m,f] : ");scanf("%c",&Sdata[i].gender);
		for(j=0; j<5; j++){
			printf("Enter Mark  %d : ",j+1);scanf("%d",&Sdata[i].marks[j]);
			Sdata[i].total = Sdata[i].total + Sdata[i].marks[j];
		}
		
		printf("The Total Mark is : %d\n",Sdata[i].total);
		printf("Enter Date of Birth [dd/mm/yyyy] : ");scanf("%d/%d/%d",&Sdata[i].dob.date,&Sdata[i].dob.month,&Sdata[i].dob.year);
	}
	
	for(i=0;i< count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(Sdata[i].total<Sdata[j].total)
			{
			    temp = Sdata[i];
			    Sdata[i] = Sdata[j];
			    Sdata[j] = temp;
			}
		}
	}
	int rankval=1;
	for(i=0; i<count; i++){
		if (i==0){
			Sdata[i].rank = rankval;
			rankval++;
		}
		else if(Sdata[i].total == Sdata[i-1].total){
			Sdata[i].rank = Sdata[i-1].rank;
			rankval++;
		}
		else{
			Sdata[i].rank=rankval;
			rankval++;
		}
	}

	printf("Name       |Roll no    | Age  |Gender  |   DOB      |  Total mark  | Rank  \n");
	printf("----------------------------------------------------------------------------");
	for(i=0; i<count; i++){
		
		printf("%9s %11d %5d %8c   %d/%d/%d  %10d %7d\n",Sdata[i].name,Sdata[i].rollnum,Sdata[i].age,Sdata[i].gender,Sdata[i].dob.date,Sdata[i].dob.month,Sdata[i].dob.year,Sdata[i].total,Sdata[i].rank);
	}
	return 0;
}

/*
#include<stdio.h>
void function(struct Student *Sdata);
void function(struct Student *Sdata)
{
	struct Data{
		int date;
		int month;
		int year;
	};
	
	struct Student{
		int rollnum;
		char name[30];
		int age;
		char gender;
		int marks[6];
		int total;
		int rank;
		struct Data dob;
	}temp;
	int count,i,j;
	for(i=0;i< count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(Sdata[i].total<Sdata[j].total)
			{
			    temp = Sdata[i];
			    Sdata[i] = Sdata[j];
			    Sdata[j] = temp;
			}
		}
	}
	int rankval=1;
	for(i=0; i<count; i++){
		if (i==0){
			Sdata[i].rank = rankval;
			rankval++;
		}
		else if(Sdata[i].total == Sdata[i-1].total){
			Sdata[i].rank = Sdata[i-1].rank;
			rankval++;
		}
		else{
			Sdata[i].rank=rankval;
			rankval++;
		}
	}
	
}
int main()
{
	struct Data{
		int date;
		int month;
		int year;
	};
	
	struct Student{
		int rollnum;
		char name[30];
		int age;
		char gender;
		int marks[6];
		int total;
		int rank;
		struct Data dob;
	};
	int count,i,j,total;
	printf("Enter How many students : ");scanf("%d",&count);
	struct Student Sdata[count+1],temp;
	for (i=0; i<count; i++){
		Sdata[i].total =0;
		printf("\tStudent %d\n",i+1);
		printf("Enter Roll No : ");scanf("%d",&Sdata[i].rollnum);
		gets(Sdata[i].name);
		printf("Enter Name    : ");gets(Sdata[i].name);
		printf("Enter AGE     : ");scanf("%d",&Sdata[i].age);
		scanf("%c",&Sdata[i].gender);
		printf("Enter Gender [m,f] : ");scanf("%c",&Sdata[i].gender);
		for(j=0; j<5; j++){
			printf("Enter Mark  %d : ",j+1);scanf("%d",&Sdata[i].marks[j]);
			Sdata[i].total = Sdata[i].total + Sdata[i].marks[j];
		}
		
		printf("The Total Mark is : %d\n",Sdata[i].total);
		printf("Enter Date of Birth [dd/mm/yyyy] : ");scanf("%d/%d/%d",&Sdata[i].dob.date,&Sdata[i].dob.month,&Sdata[i].dob.year);
	}
	
	function(Sdata);

	printf("Name        Roll no     Age   Gender       DOB        Total mark   Rank  \n");
	for(i=0; i<count; i++){
		
		printf("%9s %11d %5d %8c   %d/%d/%d  %10d %7d\n",Sdata[i].name,Sdata[i].rollnum,Sdata[i].age,Sdata[i].gender,Sdata[i].dob.date,Sdata[i].dob.month,Sdata[i].dob.year,Sdata[i].total,Sdata[i].rank);
	}
	
	return 0;
}

*/
