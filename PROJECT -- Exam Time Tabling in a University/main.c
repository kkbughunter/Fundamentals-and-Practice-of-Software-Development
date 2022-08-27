#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct date{
	int day;
	int mon;
	int year;
};
int io=1;

void Arrear_input(char opfile[30],char Main_data[20][50][80],int tot_cou,int dept_count, struct date d);
void std_timetable(char opfile[30], char room_data[100][100],int std_count);
int Input_reader(char ipfile[30], char opfile[30]);
void staff_timetable(char opfile[30], char staff_data[100][100],char room_data[100][100]);
void Main_Time_Table(char opfile[30], char Main_data[20][50][80],int course_count[15],int dept_count);
int reorder_data(char opfile[30], char Main_data[20][50][80],int num_course[15],int ana_count_data[80],int dept_count,char ana_course_data[80][40], int total_course);
int sub_count(char Main_data[20][50][80],int num_course[15],int ana_count_data[80],char ana_course_data[80][40],int dept_count);




// Block 6 find sunday 
const int wd(int year, int month, int day) {
  
  return ((const int [])
          {0, 0, 0, 0, 0, 0, 1})
		  [(day+ ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5)+ (365 * (year + 4800 - 
		  ((14 - month) / 12)))+ ((year + 4800 - ((14 - month) / 12)) / 4)- ((year + 4800 - ((14 - month) / 12)) / 100)+ 
		  ((year + 4800 - ((14 - month) / 12)) / 400)- 32045) % 7];
}
 
//======================================================================


// Block 5 printing the arrear TT as per the Main TT
void Arrear_input(char opfile[30],char Main_data[20][50][80],int tot_cou,int dept_count, struct date d)
{
	FILE *fptr;
	char filename[30];

	// geting arrear input file name.
	printf("\aEnter the arrear Input file : ");
	scanf("%s",&filename);
	fptr=fopen(filename,"r");

	FILE *opfp = fopen(opfile, "a");
	int p=0, i=0, j=0, k=0, b=0, c=0, v=0, l=0, a=0;
	char arr_data[100][100], line[75], st[10][50];

	fprintf(opfp,"\t\t\t\t\t\tSemester - %d\n\n",io);

	fgets(arr_data[i],150,fptr);
	fgets(arr_data[i],150,fptr);
	fgets(arr_data[i],150,fptr);


    strcpy(line,arr_data[i]);

	for(a=0;a<=(strlen(line));a++){
	    if(line[a]==','||line[a]=='\0'){
	        arr_data[c][b]='\0';
	        c++;
	        b=0;
	    }
	    else{
	        arr_data[c][b]=line[a];
	        b++;
	    }
	}
	fprintf(opfp,"\nArrear Time Table : \n");
	fprintf(opfp,".------------.-------------------------------------\n");
	fprintf(opfp,"|   Date     |              Course\n");
	fprintf(opfp,"|------------|-------------------------------------\n");
	for(p=1; p<= dept_count; p++){
		if (p < dept_count){
			int sun = wd(d.year,d.mon,d.day);
			if(sun==1){
				d.day+=1;
				fprintf(opfp,"| %-2d/%-2d/%-4d ",d.day,d.mon,d.year);
				d.day+=2;
			}
			else {
				fprintf(opfp,"| %-2d/%-2d/%-4d ",d.day,d.mon,d.year);
				d.day+=2;
			}
		}
		else fprintf(opfp,"---------------------------------------------------\n");
	    for (i=0; i<= dept_count; i++){
	        for (j=0; j< c ; j++){
					if ( strcmp(Main_data[i][p],arr_data[j])==0){
	            	for( l=0;l<c;l++){
						if(strcmp(st[k],arr_data[j])!=0){
							fprintf(opfp,"| %-8s ",arr_data[j]);
						}
						strcpy(st[k],arr_data[j]);
					}
				}
	        }
	    }
	   
		fprintf(opfp,"\n");
	}
	fclose(fptr);
	fclose(opfp);
	
}


// //=======================================================================


// // Student Time table Block - 4.3
void std_timetable(char opfile[30], char room_data[100][100],int std_count)
{

	int i,j=1;
    FILE *opfp = fopen(opfile, "a");

    fprintf(opfp,"\nStudent time table:\n");
	fprintf(opfp,"|---------------------------------|\n");
	fprintf(opfp,"|   Room No  |        Reg no      |\n");
	fprintf(opfp,"|------------|--------------------|\n");
	for (i=0; i<= std_count; i=i+25){
		if (i==0)fprintf(opfp,"");
		else if (i==1) fprintf(opfp,"| %4s   |  %4d   to   %4d   |\n",room_data[j++],i,i);
		else fprintf(opfp,"| %-8s   |  %-4d   to   %-4d  |\n",room_data[j++],i-24,i);
	}
	fprintf(opfp,"|---------------------------------|\n");
	fclose(opfp);
}



// //=======================================================================


//staff_tmetable Block 4.2
void staff_timetable(char opfile[30], char staff_data[100][100],char room_data[100][100])
{

	int i,num;
    FILE *opfp = fopen(opfile, "a");

	fprintf(opfp,"\nStaff time table:\n");
	num=atoi(room_data[0]);
	fprintf(opfp,"---------------------------------\n");
	fprintf(opfp,"|	Staff name	|    Room No    |\n");
	fprintf(opfp,"---------------------------------\n");
	for(i=1;i<=num;i++){
		fprintf(opfp,"|	%-15s	|   %-5s	|\n",staff_data[i],room_data[i]);
	}
	fprintf(opfp,"---------------------------------\n");
	fclose(opfp);
}


// //=======================================================================


// printing the main data in order and checking sunday 
// //  Block - 4.1
void Main_Time_Table(char opfile[30], char Main_data[20][50][80],int course_count[15],int dept_count)
{
	int i,j;
	char Time[5]="";
    struct date d,d1;
    FILE *opfp = fopen(opfile, "a");
    fprintf(opfp,"\nMain TIme Table\n");
	printf("\n");

		// Geting date and time as input.
	printf("Enter the Exam starting Date (dd/mm/yyyy) : ");
	scanf("%d/%d/%d",&d.day,&d.mon,&d.year);
	printf("Enter the Exam starting Time : ");
	scanf("%s",Time);


	d1.day = d.day;
	d1.mon = d.mon;
	d1.year = d.year;
	int max = course_count[0];


    for (i = 1; i < dept_count-2; i++)
        if (course_count[i] > max)
            max = course_count[i];
            
    fprintf(opfp,".");       
    for(j=0; j<max+1; j++) fprintf(opfp,"------------.");
    fprintf(opfp,"\n");
    

    for(i=0; i<max+1; i++){
    	if (i==0) fprintf(opfp,"|    Date    |");
    	else {
			// checking sunday.
			int sun =wd(d.year,d.mon,d.day);
			if(sun==1){
				d.day+=1;
				fprintf(opfp,"  %-2d/%-2d/%-4d|",d.day,d.mon,d.year);
				d.day+=2;
			}
			else {
				fprintf(opfp,"  %-2d/%-2d/%-4d|",d.day,d.mon,d.year);
				d.day+=2;
			}
			
		}
	}


	fprintf(opfp,"\n");
	int t_len=strlen(Time);
    for(i=0; i<max+1; i++){
		
		if (i==0) fprintf(opfp,"|    Time    |");
		else fprintf(opfp," %4s-%2d:%c%c |",Time,atoi(Time)+4,Time[t_len-2],Time[t_len-1]);
		if (i==max) fprintf(opfp,"\n|");
		if (i==max) for(j=0; j<max+1; j++) fprintf(opfp,"------------|");
	}
	fprintf(opfp,"\n");
	
	for(i=0; i<max+1; i++){
		if (i==0) fprintf(opfp,"|     Dept   ");
		else fprintf(opfp,"|  Course %2d ",i);
		if (i==max) fprintf(opfp,"|\n|");
		if (i==max) for(j=0; j<max+1; j++) fprintf(opfp,"------------|");
	}
	fprintf(opfp,"\n");
	
	int tot_cou = i;
	
	for(i=0; i<dept_count-1; i++){
		if (i==dept_count-2) for(j=0; j<max+1; j++) if(j==0)fprintf(opfp,"`------------`");else fprintf(opfp,"------------`");
		if (i==dept_count-2) break;
    	for(j=0; j<max+1; j++){
    		if (j<=course_count[i]) fprintf(opfp,"|  %-10s",Main_data[i][j]);
    		else fprintf(opfp,"|            ");
		}
		fprintf(opfp,"|\n");
	}
	fprintf(opfp,"\n");

	// arrear Time Table.
	Arrear_input(opfile,Main_data, tot_cou, dept_count, d1);
	fclose(opfp);
	return ;
}


// //=======================================================================


// // Block - 3 the main block that order the Main data. for TT
int reorder_data(char opfile[30], char Main_data[20][50][80],int num_course[15],int ana_count_data[80],int dept_count,char ana_course_data[80][40], int total_course)
{
	int main_count[20][20]={0},p=0,i=0,j=0,k=0,sw=0,loop=0;
	char swap[20];

		// Giving the grade dependes on the Main_data.
    FILE *opfp = fopen(opfile, "a");
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

		// sorting the data
	for (i = 0; i <= dept_count; ++i){
        for (j = 1; j <= num_course[i]; ++j){
            for (k =(j + 1); k <= num_course[i]; ++k){
                if (main_count[i][j] < main_count[i][k]){

                    int a = main_count[i][j];
                    main_count[i][j] = main_count[i][k];
                    main_count[i][k] = a;

					strcpy(swap, Main_data[i][j]);
					strcpy(Main_data[i][j],  Main_data[i][k]);
					strcpy(Main_data[i][k], swap);
                }
            }
        }
	}


		// finding the max val max is 
	int max;
	for (i = 1; i < dept_count-2; i++)
        if (num_course[i] > max)
            max = num_course[i];
		

		// the main work done by this sorting.
		// ordering the data in correct format.
	for(i=0; i<= max; i++){
		for(j=0; j <= max; j++){
			char temp[30];
			strcpy(temp, Main_data[i][j+1]);
			for(k=0; k <= max; k++){
				int count=0;
				if(strcmp(temp,Main_data[i+1][k])==0){
					
					strcpy(swap, Main_data[i+1][k]);
					strcpy(Main_data[i+1][k], Main_data[i+1][j+1]);
					strcpy(Main_data[i+1][j+1], swap);
				}
			}
		 }
	}
	
	
	Main_Time_Table(opfile, Main_data,num_course,dept_count+3);
	fclose(opfp);
	return 0;
}

// //=======================================================================

// // Block - 2 to find the subject count total num of sublect.
int sub_count(char Main_data[20][50][80],int num_course[15],int ana_count_data[80],char ana_course_data[80][40],int dept_count)
{
	
	int i,j,k,count=0,p,sum=0,sum1=0,a=0;


	for(p=0; p<dept_count; p++){
	   for (i=1;i<=num_course[p];i++){
	       for (j=0; j<= num_course[p]; j++){
	           for(k=1; k<= num_course[j];k++){
	            	if (strcmp(Main_data[p][i],Main_data[j][k])==0)count++;
	            }
	        }
	        strcpy(ana_course_data[a],Main_data[p][i]);
	        ana_count_data[a]=count;count=0;a++;
	   }
	}
	
printf("\n\n");

	i=0;
    int total_course=0;
    for(i=0; ana_count_data[i]!=0; i++){
		total_course++;
		// printf("%s --> %d\n",ana_course_data[i],ana_count_data[i]);
    }

	// to see the main data.
	// for (i=0; i<= dept_count; i++){
	// 	for(j=0; j <= num_course[i]; j++){
	// 		printf("%-7s  ",Main_data[i][j]);
	// 	}
	// 	printf("\n");
	// }


	// printf("\nTotal number of courses : %d \n\n",total_course);
	
    
    return total_course; 
}

// //=======================================================================


// Block 1
int Input_reader(char ipfile[30], char opfile[30]) 
{

	char Main_data[20][50][80],Room_data[100][100],Staff_data[100][100];
    int i=0,j=0,k=0,dept_count=0,std_count=0;
    int num_course[15], cc[15], ana_count_data[80];
    char ana_course_data[80][40];

	// reading all input file name.
    FILE *ipfp = fopen(ipfile, "r");
    FILE *opfp = fopen(opfile, "a");

    if(ipfp == NULL) {
        perror("\n\n\t\t\t\t\t\aUnable to open file!\a\n\n\n");
        exit(1);
    }
	if(opfp == NULL) {
        perror("\n\n\t\t\t\t\t\aUnable to open file!\a\n\n\n");
        exit(1);
    }

    fgets(Main_data[i][dept_count], 150, ipfp);// ignore the first line.
    fgets(Main_data[i][dept_count], 150, ipfp);// ignore the second line.

    while(fgets(Main_data[dept_count][i], 150, ipfp) != NULL) {  // reading all data and counting num of dept. 
    	int count=0;
        for(j=0; j< strlen(Main_data[dept_count][i]); j++){
        	if (Main_data[dept_count][i][j]==',')count+=1;
		}
		
		num_course[dept_count]=count-1;   // finding the number of course hear
		
		dept_count++;
        
    }
    
    fclose(ipfp);
    
	
    num_course[dept_count-2]=0; // this is not course this is room data
    num_course[dept_count-1]=0; // this is staff data
    
    
    // split the string and put it in main data
    for(i=0; i<dept_count; i++){

    	char line[75];
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
	// printf("student Count %d \n",std_count);


			//		print main data. before sorting.
	// for (i=0; i<= dept_count-3; i++){
	// 	for(j=0; j <= num_course[i]; j++){
	// 		printf("%-7s  ",Main_data[i][j]);
	// 	}
	// 	printf("\n");
	// }

	int total_course=0;
	total_course = sub_count(Main_data,num_course,ana_count_data,ana_course_data,dept_count-3);
	
	reorder_data(opfile, Main_data,num_course,ana_count_data,dept_count-3,ana_course_data, total_course);
	
	std_timetable(opfile, Room_data,std_count);

	staff_timetable(opfile, Staff_data,Room_data);
    
	fprintf(opfp,"\n==============================================================================\n\n");
	fclose(opfp);
	return 0;
}
	


int main(int argc, char *argv[])
{
	printf("\n\n\t\t\tWelcome to Exam Time Tabling Scheduler\n\n\a");

	char infile[30]="test.txt", opfile[30]="o";
	int sem_count=1;

	printf("How Many SEMESTER : ");
	scanf("%d",&sem_count);
	printf("Enter the Output File name : ");
	scanf("%s",&opfile);

	// this loop is use to print more then one semester TT.
	for (io=1; io<=sem_count; io++)
	{
		printf("\a\nEnter the Sem %d Input file : ",io);
		scanf("%s",&infile);

		// call the fun to read input from file.
		Input_reader(infile, opfile);
	}

	printf("\n\n\t\t Please Check The \"%s\" :)\n\n",opfile);
	printf("\t\t\t\a Thank You :)\n\n\n");
	return 0;
}


/*

4
output.txt
test.txt
1/5/2023
9:30
arreartest.txt
test1.txt
12/8/2025
12:0
arreartest1.txt
test2.txt
1/5/2023
9:30
arreartest2.txt
test3.txt
12/8/2025
12:0
arreartest3.txt

*/