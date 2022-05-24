// 2) Convert the given temperature in Celsius to Fahrenheit and Kelvin scale.
#include<stdio.h>
int main()
{
    float inputval;
    int opt;
    printf("1. Find Calsus to Fahrenheit\n2. Find Calsus to Kelvan\n3. Find Fahrenheit to Calsus\nEnter your choice : \b");
    scanf("%d",&opt);
    printf("Enter the value : \b");
    scanf("%f",&inputval);
    switch (opt){
        case 1:{
            printf("Calsus to Fahrenheit : %f\n\n",(inputval* 9/5)+32);
            break;
        }
        case 2:{
            printf("Calsus to Kelvan : %f\n\n", inputval + 273.15);
            break;
        }
        case 3:{
            printf("Fahrenheit to Calsus : %f\n\n",(inputval-32)*5/9);
            break;
        }
        default:{
            printf("Enter the valid Option :)");
        }
    }
    return 0;
}
