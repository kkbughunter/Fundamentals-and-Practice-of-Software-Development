#include<stdio.h>

void main()
{
    // Several valid floating-point constants are shown below.
    printf("%f\t %f\t %f\t %f\n%f\t %f\t %f\t %f\n%f\t %f\t %f\n", 0., 1., 0.2, 827.602, 50000., 0.000743, 12.3, 315.0066, 2E-8, 0.006e-3, 1.6667E+8, 0.12121212e12);

    // The folling floating-point constants are written incorrectly for the reasons stated.
    printf("%f\t %f\t %f", 1, 1,000.0, 2E110.2);
}