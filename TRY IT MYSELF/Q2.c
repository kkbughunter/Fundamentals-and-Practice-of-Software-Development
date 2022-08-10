// Chef is fond of burgers and decided to make as many burgers as possible.
// Chef has AAA patties and BBB buns. To make 111 burger, Chef needs 111 patty and 111 bun.
// Find the maximum number of burgers that Chef can make.
#include <stdio.h>
int main(void) {
	int t,a,b;
	scanf("%d",&t);
	while(t!=0){
	    scanf("%d %d",&a,&b);
	    if(a<=b) printf("%d\n",a);
	    else printf("%d\n",b);
	    t--;
	}
	return 0;
}
