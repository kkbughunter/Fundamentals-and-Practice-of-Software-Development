
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{ int i=0,user,comp,n,score=0;
 char game[3][10]={"stone","paper","scissors"};

   printf("enter how many times you want to play : ");
   scanf("%d",&n);

   srand(time(0));
  
   while(i<n)
  {  printf("                                	  playing time  %d\n for\n	stone - 1\n	  paper - 2\n	    scissors - 3\nenter your choice : ",i+1);
     scanf("%d",&user);
     if(user<0||user>3)
       {printf("enter  your choice between 1 and 3\n");
         continue;
       }
     comp=rand()%3+1;
     printf("computer choice is %s\n",game[comp-1]);
     if(user==comp)
       printf("match is draw\n");
     else if(user==1)
       {if(comp==2)
         printf("computer win\n");
        else 
          {printf("you win\n");
           score++;
          }
       }
    else if(user==2)
       {if(comp==3)
         printf("computer win\n");
        else
         { printf("you win\n");
           score++;
         }
       }
    else if(user==3)
       {if(comp==1)
         printf("computer win\n");
        else 
        {printf("you win\n");
         score++;
        }
       }
   i++;
   }
  printf("your score is %d\n",score);
  printf("overall winning percentage of you is %.0f\n",(float)score/n*100);
}

