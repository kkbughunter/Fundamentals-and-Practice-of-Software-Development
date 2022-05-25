#include<stdio.h>
int main()
{
	printf("1 for Addition\n2 for subtraction\n3 for Multiplication\n4 for Division \n       0 for exit\n\n");
	int opt;
	float a, b;
	while (1){
		printf("Enter the option : \b");scanf(" %d",&opt);
		if (opt == 0)break;
		if (opt == 1 || opt == 2 || opt == 3 || opt == 4 ){
			printf("Enter the Value for A : \b");scanf("%f",&a);
			printf("Enter the Value for B : \b");scanf("%f",&b);
			if (opt== 1){
				printf("%.2f + %.2f = %.2f\n\n",a,b,a+b);
			}
			else if (opt==2){
				printf("%.2f - %.2f = %.2f\n\n",a,b,a-b);
			}
			else if (opt ==3){
				printf("%.2f x %.2f = %.2f\n\n", a, b, a*b);
			}
			else if (opt ==4){
				if (b==0){
					printf("\tThis function is INFINITIVE\n");
				}
				else{
					printf("%.2f / %.2f = %.2f\n\n",a,b,a/b);
				}
			}
			else{
				printf("Enter the correct opt.\n\n");
				break;
			}
			
		}
		else{
			printf("\nEnter the valid Input\n\n");
		}
	}
	
	return 0;
}
