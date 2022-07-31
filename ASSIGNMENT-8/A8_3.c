#include <stdio.h>
#include<stdlib.h>
#define MAXROWS 20
void readinput(int *a[MAXROWS], int nrows, int ncols);
void computesums(int *a[MAXROWS],int *b[MAXROWS], int *c[MAXROWS], int nrows, int ncols);
void writeoutput(int *a[MAXROWS], int nrows, int ncols);
int main()
{
	int row, nrows, ncols;
	int* a[MAXROWS], *b[MAXROWS], *c[MAXROWS];
	printf("enter rows : ") ;
	scanf("%d", & nrows);
	printf("enter columns : ");
	scanf("%d",&ncols);
	for(row=0;row<nrows;row++)
	{
		a[row]=(int*)malloc(ncols*sizeof(int));
		b[row]=(int*)malloc(ncols*sizeof(int));
		c[row]=(int*)malloc(ncols*sizeof(int));
		
	}
	printf("enter elements of first table\n");
	readinput(a, nrows, ncols);
	printf("enter elements of sceond table\n");
	readinput(b, nrows, ncols);
	printf("sum of the given elements are\n");
	computesums(a, b, c, nrows, ncols);
	writeoutput(c,nrows,ncols);
	
}
void readinput(int *a[MAXROWS], int nrows, int ncols)
{
	int row, col;
	for(row=0;row<nrows;row++)
		for(col=0;col<ncols;col++)
		{
			printf("enter element of place [%d][%d]", row, col);
			scanf("%d", (*(a+row)+col)); 
		}
		return;
}
void computesums(int *a[MAXROWS],int *b[MAXROWS], int *c[MAXROWS], int nrows, int ncols)
{
	int row, col;
	for(row=0;row<nrows;row++)
		for(col=0;col<ncols;col++)
		{
			*(*(c+row)+col) =*(*(a+row)+col)+*(*(b+row)+col);
		}
		return;	
}

void writeoutput(int *a[MAXROWS], int nrows, int ncols)
{
	int row, col;
	for(row=0;row<nrows;row++)
	{
		for(col=0;col<ncols;col++)
			printf("%4d",*(*(a+row)+col));
		printf("\n");}
}
