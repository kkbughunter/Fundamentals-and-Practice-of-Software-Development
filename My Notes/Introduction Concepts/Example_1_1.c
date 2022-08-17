// Area of the C program that read in the radius of a circle, calculates its area and then writes the calculated result.
# include<stdio.h>

void main()
{
    float radius, area;
    printf("Radies = ");
    scanf("%f", &radius);
    area = 3.14159 * radius * radius;
    printf("Area = %f",area);
    return 0;
}