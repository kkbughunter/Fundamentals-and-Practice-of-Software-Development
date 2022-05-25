#include<stdio.h>
#include<math.h>
int main()
{
	printf("A for Addition\nS for subtraction\nM for Multiplication\nD for Division \nR for squre root       q for exit\n\n");
	char opt;
	float a, b;
	while (1){
		printf("Enter the option : \b");scanf(" %c",&opt);
		if (opt == 'q')break;
		if (opt == 'a' || opt == 's' || opt == 'm' || opt == 'd' || opt=='r'){
			printf("Enter the Value for A : \b");scanf("%f",&a);
			printf("Enter the Value for B : \b");scanf("%f",&b);
			switch(opt){
				case('a'):{
					printf("%.2f + %.2f = %.2f\n\n",a,b,a+b);
					break;
				}
				case('s'):{
					printf("%.2f - %.2f = %.2f\n\n",a,b,a-b);
					break;
				}
				case('m'):{
					printf("%.2f x %.2f = %.2f\n\n", a, b, a*b);
					break;
				}
				case('d'):{
					if (b==0){
						printf("\tThis function is INFINITIVE\n");
					}
					else{
						printf("%.2f / %.2f = %.2f\n\n",a,b,a/b);
					}
					break;
				}  
				case('r'):{
					printf("squre root of %.2f = %.2f\n\n", a, sqrt(a));
				}
				default:{
					printf("Enter the correct opt.\n\n");
					break;
				}
			}
		}
		else{
			printf("\nEnter the valid Input\n\n");
		}
	}
	return 0;
}
