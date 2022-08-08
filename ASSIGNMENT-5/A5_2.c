#include<stdio.h>
#include<string.h>
void format(char rs[]){
	int i=0,a=2;
    for (i = 0; i<strlen(rs); ++i) {
        printf("%c",rs[i]);
        if (i+3==strlen(rs)-1)printf(",");
        if (i+5==strlen(rs)-1)printf(",");
        if (i+7==strlen(rs)-1)printf(",");
        if (i+9==strlen(rs)-1)printf(",");
        if (i+11==strlen(rs)-1)printf(",");
        if (i+13==strlen(rs)-1)printf(",");
        if (i+15==strlen(rs)-1)printf(",");
        if (i+17==strlen(rs)-1)printf(",");
    }
}
int main()
{
	char rs[25]="";
	printf("Enter the RS :- ");
	gets(rs);
	format(rs);
  printf("\n\n");
  return 0;
}