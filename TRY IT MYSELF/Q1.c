// There were initially XXX million people in a town, out of which YYY million people left the town and ZZZ million people immigrated to this town.
// Determine the final population of town in millions.

#include <stdio.h>
int main(void) {
	int t,x,y,z;
	int i=0;
	scanf("%d",&t);
	for(i=0; i<t; i++){
	    scanf("%d %d %d",&x,&y,&z);
	    printf("%d\n",(x-y)+z);
	}
	return 0;
}
