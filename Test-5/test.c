#include<stdio.h>

struct complex{
   float real;
   float imaginary;
};

struct complex Add(struct complex c1,struct complex c2){

   struct complex sum;
   sum.real=c1.real+c2.real;
   sum.imaginary=c1.imaginary+c2.imaginary;
   return sum;
}

int main(){
    
   struct complex c1;
   struct complex c2;
   struct complex sum;
    
   printf("Enter a real part: ");
   scanf("%f",&c1.real); 
   printf("Enter a imaginary part: ");
   scanf("%f",&c1.imaginary);

   printf("Enter a real part: ");
   scanf("%f",&c2.real);
   printf("Enter a real part: ");
   scanf("%f",&c2.imaginary);

   sum=Add(c1,c2);
    
    printf("The complex number c1 is %.2f +i %.2f\n",c1.real,c1.imaginary);
    printf("The complex number c2 is %.2f +i %.2f\n",c2.real,c2.imaginary);
    printf("The sum of two complex number is %.2f +i %.2f\n",sum.real,sum.imaginary);
    
    return 0;
}
