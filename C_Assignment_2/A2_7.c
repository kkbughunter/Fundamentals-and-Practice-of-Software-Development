// version 1
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// // there is no ending loop.
// int main()
// {
//     int temp, sum=0;
//     do{
//         printf("Enter the intege (-999) : ");scanf("%d",&temp);
//         sum+= temp;

//     }while(1);
//     printf("%d \n",sum);
//     return 0;
// }


// version 2
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main()
// {
//     int temp, sum=0;
//     do{
//         printf("Enter the intege (-999) : ");scanf("%d",&temp);
        
//         if (temp == -999){
//             break;
//         }
//         else{
//             sum+= temp;
            
//         }

//     }while(1);
//     printf("%d \n",sum);
//     return 0;
// }


// version 3
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main()
// {
//     char temp[6];
//     int sum=0;
//     do{
//         printf("Enter the intege (STOP) : ");scanf("%5s",&temp);
        
//         if (strcmp(temp, "STOP") == 0){
//             break;
//         }
//         else{
//             sum+=atoi(temp);
            
//         }

//     }while(1);
//     printf("%d \n",sum);
//     return 0;
// }

// version 4
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main()
// {
//     int temp, sum=0;
//     do{
//         printf("Enter the intege (-999) : ");scanf("%d",&temp);
        
//         if (temp == -999){
//             break;
//         }
//         else if (temp>=1 && temp<=101){
//             sum+= temp;
            
//         }
//         else{
//            break;
//         }

//     }while(1);
//     printf("%d \n",sum);
//     return 0;
// }




// version 5
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main()
// {
//     int temp, sum=0;
//     do{
//         printf("Enter the intege (-999) : ");scanf("%d",&temp);
        
//         if (temp == -999){
//             break;
//         }
//         else if (temp>=1 && temp<=101){
//             sum+= temp;
            
//         }
//         else{
//             printf("Enter the valid input 1 to 100\n");
//             break;
//         }

//     }while(1);
//     printf("%d \n",sum);
//     return 0;
// }



// version 6
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main()
// {
//     int temp, sum=0;
//     do{
//         printf("Enter the intege (-999) : ");scanf("%d",&temp);
        
//         if (temp == -999){
//             break;
//         }
//         else if (temp>=1 && temp<=101){
//             sum+= temp;
            
//         }
//         else{
//             printf("Enter the valid input 1 to 100\n");
//         }

//     }while(1);
//     printf("%d \n",sum);
//     return 0;
// }