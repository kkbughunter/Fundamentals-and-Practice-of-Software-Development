#include<stdio.h>
#include<string.h>
#include<math.h>
void FindNthTerm()
{
    int a,d,n,res;
    printf("\nEnter the first term value (a): ");
    scanf("%d",&a);
    printf("\nEnter the difference (d): ");
    scanf("%d",&d);

    printf("\nWhich term you want (n)? ");
    scanf("%d",&n);

    res = a + (n-1) *d;
    printf("\n%dth Term is : %d\n",n,res);
    printf("\nPress a key to continue.....");
    getchar();getchar();
}


void PrintNterms()
{
    int a,d,n,res,i;
    printf("\nEnter the first term value (a): ");
    scanf("%d",&a);
    printf("\nEnter the difference (d): ");
    scanf("%d",&d);

    printf("\nHow many terms you want (n)? ");
    scanf("%d",&n);

    printf("\n\n");
    res = a;
    for(i=1; i<=n; i++){
        printf("%5d",res);
        res +=d;
    }
    printf("\nPress a key to continue.....");
    getchar();getchar();
}



void PrintNtermsFromX()
{
    int a,d,n,st,res,i,j;
    printf("\nEnter the first term value (a): ");
    scanf("%d",&a);
    printf("\nEnter the difference (d): ");
    scanf("%d",&d);
    printf("Enter the Starting Term (st): ");
    scanf("%d",&st);

    printf("\nHow many terms you want (n)? ");
    scanf("%d",&n);

    printf("\n\n");
    res = a + (st-1) *d;
    for(i=1; i<=n; i++){
        printf("%5d",res);
        res +=d;
    }
    printf("\nPress a key to continue.....");
    getchar();getchar();
}



void Find3TermsUsingSumProduct()
{
    int a,ps,d,s;
    printf("\nEnter the sum of 3 consective numbers: ");
    scanf("%d",&s);
    printf("\nEnter the sum of product of 3 consective numbers: ");
    scanf("%d",&ps);

    a = s/3;
    d = sqrt( a*a - (ps/a));

    printf("The 3 consective numbers Terms are %d %d %d ",a-d, a, a+d);

    printf("\nPress a key to continue.....");
    getchar();getchar();
}


void Find3TermsUsingSumAndSumOfSquares()
{
    int a,ss,d,s;
    printf("\nEnter the sum of 3 consective numbers: ");
    scanf("%d",&s);
    printf("\nEnter the sum of Squares of 3 consective numbers: ");
    scanf("%d",&ss);

    a = s/3;
    d = sqrt( (ss - 3 * a * a)/2);

    printf("The 3 consective numbers Terms are %d %d %d ",a-d, a, a+d);

    printf("\nPress a key to continue.....");
    getchar();getchar();
}

void ProcessArgument(int opt)
{
    switch (opt)
        {
        case 1:
            FindNthTerm();
            break;
        case 2:
            PrintNterms();
            break;
        case 3:
            PrintNtermsFromX();
            break;
        case 4:
            Find3TermsUsingSumProduct();
            break;
        case 5:
            Find3TermsUsingSumAndSumOfSquares();
            break;
        default:
            printf("\nInvalid Choice. Press a key to continue....");
            getchar();getchar();
        }
}

