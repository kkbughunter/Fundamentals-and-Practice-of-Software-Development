#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
void main()
{ srand(time(0));
 int stop,cmpnum,option,usernum,i,wining,betmoney,usernumtemp,cmpnumtemp;
 FILE*fptr;
 
 printf("hi there now we are going to play ROULETTE game\nthis is a betting game\nAnd you have four options in betting\n");
 printf("entering 0 or 00 you will be automatically lose ");
 printf("BETTING OPTION 1 \n		you may choose a number from 1 to 36 and in this option winning chance will be very less however you will be rewarded high \n");
 printf("BETTING OPTION 2 \n		this is by choosing color winning chance will be high but reward will be less\n");
 printf("BETTING OPTION 3 \n		this will be by choosing odd or even number and winning probablity will be high\n");
 printf("BETTING OPTION 4 \n		this is by choosing number that is greater than 18 or smaller and winning chance will be high\n");
 fptr=fopen("game_summary.txt","w");
 while(1)
 {i=1;
 printf("enter your option : ");
 scanf("%d",&option);
 if(option<1||option>4)
  {printf(" enter number between 1 to 4 \n");
   continue;
  }
 switch(option)
   { case 1:
        while(i)
       {
                   printf("enter number : ");
                   scanf("%d",&usernum);
               if(usernum<0||usernum>36)
                  {
                       printf("enter number between 1 to 36\n");
                       continue;
                  }
                  i--;
                  printf("enter betmoney : ");
                  scanf("%d",&betmoney);
                  cmpnum=(rand()%37);
               if(usernum==cmpnum)
                   {
                     printf("yes! you win\nreward for your win is %d\n",(betmoney+(betmoney*35)));
                    }
               else
                    {
                     printf("marble is rest in %d so you lose\nbetter luck next time\n",cmpnum);
                    }
       }      break;

   
      case 2:
           while(i)
            {
                 printf("enter 1 for red and 2 for black");
                 scanf("%d",&usernum);
                  if(usernum<0||usernum>2)
                  {  
                     printf("enter number  1 or 2\n");
                     continue;
                  }
                  i--;
                  printf("enter betmoney : ");
                  scanf("%d",&betmoney);
                  cmpnum=(rand()%2)+1;
                  if(usernum==cmpnum)
                   {
                     printf("you win !\nreward for this winning is %d\n",betmoney*2);
                   }
                  else
                   {
	                 if(cmpnum==1)
                               printf("marble rest in red\nso you lost\nbetter luck next time");
                         else
                                printf("marble rest in black\nso you lost\nbetter luck next time");   
           
                   }
             
             }
                        break;
       case 3:
           while(i)
             {printf("enter number");
                 scanf("%d",&usernum);
                  if(usernum<0||usernum>36)
                  {  
                     printf("enter number  1 or 36\n");
                     continue;
                  }
                  i--;
                  printf("enter betmoney : ");
                  scanf("%d",&betmoney);
                  cmpnum=(rand()%36)+1;
                  usernumtemp=usernum%2;
                  cmpnumtemp=cmpnumtemp%2;
                  if(usernumtemp==cmpnumtemp)
                   {
                     printf("you win !\nreward for this winning is %d\n",betmoney*2);
                   }
                  else
                   {
	                 if(cmpnumtemp==0)
                               printf("marble rest in even%d\nso you lost\nbetter luck next time",cmpnum);
                         else
                                printf("marble rest in odd%d\nso you lost\nbetter luck next time",cmpnum);   
           
                    }
        
                }
           break;
      case 4:
          while(i)
       {
                   printf("enter number : ");
                   scanf("%d",&usernum);
               if(usernum<0||usernum>36)
                  {
                       printf("enter number between 1 to 36\n");
                       continue;
                  }
                  i--;
                  printf("enter betmoney : ");
                  scanf("%d",&betmoney);
                  cmpnum=(rand()%36)+1;
                  cmpnumtemp=cmpnum%2;
               if(usernum<=18)
                   { if(cmpnum<=18)
                     printf("yes! you win\nreward for your win is %d\n",betmoney*2);
                      else
                      printf("marble is rest in %d so you lose\nbetter luck next time\n",cmpnum);
                    }
               else
                    { if(cmpnum>18)
                        printf("yes! you win\nreward for your win is %d\n",betmoney*2);
                      else
                     printf("marble is rest in %d so you lose\nbetter luck next time\n",cmpnum);
                    }
       }    
             break;
         
   
   }
 printf("do you want continue press 1\n");
 scanf("%d",&stop);
 if(stop!=1)
  break;
 }




}
