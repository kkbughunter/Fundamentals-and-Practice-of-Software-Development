// 4)Find the net salary of an employee by getting the basic pay (BP) as input. Compute the
// based upon the following formulae:
// DA = 88% of BP
// HRA = 8% of BP
// PF = 10% of BP
// CCA = Rs. 1000
// Insurance = Rs. 2000
// Gross Pay = BP + DA + HRA + CCA
// Deductions = Insurance + PF
// Net Pay = Gross Pay – Deductions

#include<stdio.h>
int main()
{
    int basic_pay, CCA, INSURANCE = 2000;
    float DA, HRA, PF, gross_pay, Deductions, Net_pay;
    printf("Enter your Basic Pay : ");scanf("%d",&basic_pay);
    DA = (basic_pay/100)*88;
    HRA = (basic_pay/100)*8;
    PF = (basic_pay/100)*10;
    CCA = 1000;
    printf("Your Gross Pay = %f \n",basic_pay + DA + HRA + CCA);
    printf("Your Deductions = %f\n",INSURANCE + PF);
    printf("Net Pay = %f\n",((basic_pay + DA + HRA + CCA) - (INSURANCE + PF)));
    return 0;
}
