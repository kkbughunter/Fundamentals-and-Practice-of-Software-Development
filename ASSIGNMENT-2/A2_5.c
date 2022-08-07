// 5)Modify (4) to set HRA based on type city which is input (Metro 10%; Corporation 8%; Taluk 5%);
// to set CCA based on designation (Worker (W) 1000; Engineer (E) 2000; Manager (M) 5000) (Use
// switch / nested if)
#include<stdio.h>
int main()
{
    int basic_pay, CCA, HRA, INSURANCE = 2000;
    float DA, PF, gross_pay, Deductions, Net_pay;
    printf("Enter your Basic Pay : ");scanf("%d",&basic_pay);
    DA = (basic_pay/100)*88;
    PF = (basic_pay/100)*10;

    // HRA
    printf("1.Metro - 10% \n2.Corporation 8%\n3.Taluk 5%\nSelect HRA : \b");
    scanf("%d",&HRA);
    if (HRA==1) {
        HRA = (basic_pay/100)*10;
    }
    else if (HRA==2) {
        HRA = (basic_pay/100)*8; 
    }
    else if (HRA==3) {
        HRA = (basic_pay/100)*5; 
    }
    else{
        printf("Enter the valid option.\n");
        HRA=0;
    }


    //  CCA
    printf("Select CCA :- \n1. Work - 1000\n2. Engineer - 2000\n3.manager - 3000\nSelect CCA : \b");
    scanf("%d",&CCA);
    switch(CCA){
        case 1:{
            CCA = 1000;
            break;
        }
        case 2: {
            CCA = 2000;
            break;
        }
        case 3: {
            CCA = 3000;
            break;
        }
        default:{
            printf("Enter the valid option.\n");
            CCA=0;
            break;
        }
    }



    if (CCA<=0 || HRA<=0 || basic_pay<=0){
        printf("----------------------------------------------\nPlease Check you Amount or option.\n----------------------------------------------\n");
    }
    else{
        printf("---------------------------------------\n");
        printf("Your Gross Pay = %.2f \n",basic_pay + DA + HRA + CCA);
        printf("Your Deductions = %.2f\n",INSURANCE + PF);
        printf("Net Pay = %.2f\n",((basic_pay + DA + HRA + CCA) - (INSURANCE + PF)));
        printf("---------------------------------------\n");
    }
    return 0;
}






