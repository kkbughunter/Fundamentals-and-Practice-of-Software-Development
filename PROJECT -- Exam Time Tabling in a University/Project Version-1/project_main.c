#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>


//=======================================================================

// Student Time table Block - 4.3
int std_timetable(char room_data[100][100],int std_count){
	int i,j=1;
	printf("|---------------------------------|\n");
	printf("|   Room No  |        Reg no      |\n");
	printf("|------------|--------------------|\n");
	for (i=0; i<= std_count; i=i+25){
		if (i==0)printf("");
		else if (i==1) printf("| %4s   |  %4d   to   %4d   |\n",room_data[j++],i,i);
		else printf("| %-8s   |  %-4d   to   %-4d  |\n",room_data[j++],i-24,i);
	}
	printf("|---------------------------------|\n");
}



//=======================================================================

//staff_tmetable Block 4.2
int staff_timetable(char staff_data[100][100],char room_data[100][100]){
	int i,num;
	num=atoi(room_data[0]);
	printf("---------------------------------\n");
	printf("|	Staff name	|Room No|\n");
	printf("---------------------------------\n");
	for(i=1;i<=num;i++){
		printf("|	%-15s	|%-5s	|\n",staff_data[i],room_data[i]);
	}
	printf("---------------------------------\n");
}


//=======================================================================

// Main Time Table Block - 4.1
void Main_Time_Table(char Main_data[10][30][80],int course_count[15],int dept_count,char Time[8],char Date[10])
{
	int i,j;
	int max = course_count[0];
    for (i = 1; i < dept_count-2; i++)
        if (course_count[i] > max)
            max = course_count[i];
            
    printf(".");       
    for(j=0; j<max+1; j++) printf("------------.");
    printf("\n");
    
    int date=atoi(Date);
    for(i=0; i<max+1; i++){
    	if (i==0) printf("|    Date    |");
    	else {
			printf(" %-3d\b%-7s  |",date,"/5/2022");
			date+=2;
		}
	}
	printf("\n");
	int t_len=strlen(Time);
    for(i=0; i<max+1; i++){
		
		if (i==0) printf("|    Time    |");
		else printf(" %4s-%2d:%c%c |",Time,atoi(Time)+4,Time[t_len-2],Time[t_len-1]);
		if (i==max) printf("\n|");
		if (i==max) for(j=0; j<max+1; j++) printf("------------|");
	}
	printf("\n");
	
	for(i=0; i<max+1; i++){
		if (i==0) printf("|     Dept   ");
		else printf("|  Course %2d ",i);
		if (i==max) printf("|\n|");
		if (i==max) for(j=0; j<max+1; j++) printf("------------|");
	}
	printf("\n");
	
	
	
	for(i=0; i<dept_count-2; i++){
    	for(j=0; j<max+1; j++){
    		if (j<=course_count[i]) printf("|  %-10s",Main_data[i][j]);
    		else printf("|            ");
		}
		printf("|\n");
		if (i==dept_count-3) for(j=0; j<max+1; j++) if(j==0)printf("`------------`");else printf("------------`");
	}
	printf("\n");
	return ;
}


//=======================================================================

// Block - 3
int reorder_data(char Main_data[10][30][80],int num_course[15],int ana_count_data[20],int dept_count,char ana_course_data[50][40], int total_course)
{
	int main_count[20][20]={0},p=0,i=0,j=0,sw=0;
	char swap[20],Date[10]="10/5/2022",Time[8]="9:00";
	
	printf("Enter the Exam starting Date : ");scanf("%s",Date);
	printf("Enter the Exam starting Time : ");scanf("%s",Time);
	for(p=0; p<=dept_count; p++){
	   for (i=0;i<=num_course[p];i++){
	       for (j=0; j< total_course; j++){   // ana_course_data
	            	if (strcmp(Main_data[p][i],ana_course_data[j])==0){
	            		main_count[p][i]=ana_count_data[j];
	            		break;
					}
	        }
	   }
	}
	for (i = 0; i <=dept_count; i++){
	    for (j = 0; j < num_course[i]; j++){
	        if(main_count[i][j] > main_count[i][j+1]){
	        	sw = main_count[i][j];
	        	main_count[i][j] = main_count[i][j+1];
	        	main_count[i][j+1] = sw;
	        	
	            strcpy(swap, Main_data[i][j+1]);
	            strcpy(Main_data[i][j+1],  Main_data[i][j+2]);
	            strcpy(Main_data[i][j+2], swap);
	        }
	    }
	}
	Main_Time_Table( Main_data,num_course,dept_count+3,Time,Date);
	return 0;
}

//=======================================================================

// Block - 2
int sub_count(char Main_data[10][30][80],int num_course[15],int ana_count_data[20],char ana_course_data[50][40],int dept_count)
{
	
	int i,j,k,count=1,p,sum=0,sum1=0,a=0;
	
	for(p=0; p<dept_count; p++){
	   for (i=1;i<=num_course[p];i++){
	       for (j=0; j<= dept_count; j++){
	           for(k=1; k<= num_course[j];k++){
	            	if (strcmp(Main_data[p][i],Main_data[j][k])==0)count++;
	            }
	        }
	        strcpy(ana_course_data[a],Main_data[p][i]);
	        ana_count_data[a]=count;count=1;a++;
	   }
	}
	
	i=0;
    int total_course=0;
    for(i=0; ana_count_data[i]!=0; i++){
		total_course++;
    }

	
    return total_course; 
}

//=======================================================================


// Block 1
int Input_reader(char filename[30], int i0) 
{

	char Main_data[10][30][80],Room_data[100][100],Staff_data[100][100];
    int i=0,j=0,k=0,dept_count=0,std_count=0;
    int num_course[15], cc[15], ana_count_data[20];
    char ana_course_data[50][40];
    FILE *fp = fopen(filename, "r");
    if(fp == NULL) {
        perror("\n\n\t\t\t\t\t\aUnable to open file!\a\n\n\n");
        exit(1);
    }
 
    fgets(Main_data[i][dept_count], 150, fp);// ignore the first line.
    fgets(Main_data[i][dept_count], 150, fp);// ignore the first line.
    while(fgets(Main_data[dept_count][i], 150, fp) != NULL) {  // reading all data and counting num of dept. 
    	int count=0;
        for(j=0; j< strlen(Main_data[dept_count][i]); j++){
        	if (Main_data[dept_count][i][j]==',')count+=1;
		}
		
		num_course[dept_count]=count-1;   // finding the number of course hear
		
		dept_count++;
        
    }
    
    fclose(fp);
    
	
    num_course[dept_count-2]=0; // this is not course this is room data
    num_course[dept_count-1]=0; // this is staff data
    
    
    // split the string and put it in main data
    for(i=0; i<dept_count; i++){
    	char line[228];
    	strcpy(line,Main_data[i][0]);
	 	char newString[10][10];
    	int a=0,b=0,c=0,v=0;
		for(a=0;a<=(strlen(line));a++){
		    if(line[a]==','||line[a]=='\0'){
		        newString[c][b]='\0';
		        c++;
		        b=0;
		    }
		    else{
		        newString[c][b]=line[a];
		        b++;
		    }
		}
		if (i<=dept_count-2) for(v=0;v < c;v++)strcpy(Main_data[i][v],newString[v]);
		if (i==dept_count-2) for(v=0;v < c;v++)strcpy(Room_data[v],newString[v]);
		if(i==dept_count-1) for(v=0;v < c;v++)strcpy(Staff_data[v],newString[v]);
	}
	
	// to count the number of student
	for(i=0;i < dept_count-2;i++) {
		int q=0;
		q = num_course[1];
		std_count+=atoi(Main_data[i][q+1]);
	}
	
	// Function Calling place.
	int total_course=0;
	total_course = sub_count(Main_data,num_course,ana_count_data,ana_course_data,dept_count-3);
	reorder_data(Main_data,num_course,ana_count_data,dept_count-3,ana_course_data, total_course);
	printf("Student time table:\n\n");
	std_timetable(Room_data,std_count);
	printf("Staff time table:\n\n");
	staff_timetable(Staff_data,Room_data);
    return 0;
}
	


int main(int argc, char *argv[])
{
	printf("\n\n\t\t\tWelcome to Exam Time Tabling Scheduler\n\n\a");
	char filename[30]="";
	int i=1,sem_count=0;
	printf("How Many SEMESTER : ");scanf("%d",&sem_count);
	for (i=1; i<=sem_count; i++){
		printf("\aEnter the Sem %d Input file : ",i);scanf("%s",filename);
		Input_reader(filename,i);
	}
	return 0;
}


