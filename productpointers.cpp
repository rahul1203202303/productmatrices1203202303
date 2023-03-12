#include <stdio.h>
#include <stdlib.h>
void readmatrix(int **m, int r, int c);
void printmatrix(int **m, int r, int c);
void product(int **m1, int **m2, int **m3, int r1, int c2, int r2);
int main(void)
{
	int **m1, **m2, **m3={0}, r1, c1, r2, c2, i;
	printf("\n Enter number of rows of 1st matrix: ");
	scanf(" %d", &r1);
	printf("\n Enter number of cols of 1st matrix: ");
	scanf(" %d", &c1);
	m1=(int **)calloc(r1, sizeof(int));
	for(i=0;i<=r1;i++)
		*(m1+i)=(int *)calloc(c1, sizeof(int));
	readmatrix(m1,r1,c1);
	printmatrix(m1,r1,c1);
	printf("\n Enter number of rows of 2nd matrix: ");
	scanf(" %d", &r2);
	printf("\n Enter number of cols of 2nd matrix: ");
	scanf(" %d", &c2);
	m2=(int **)calloc(r2, sizeof(int));
	for(i=0;i<=r2;i++)
		*(m2+i)=(int *)calloc(c2, sizeof(int));
	readmatrix(m2,r2,c2);
	printmatrix(m2,r2,c2);
	if(c1==r2){
		printf("\nPRODUCT of matrices is: ");
		m3=(int **)calloc(r1, sizeof(int));
		for(i=0;i<r1;i++)
			*(m3+i)=(int *)calloc(c2, sizeof(int));
		product(m1,m2,m3,r1,c2,r2);
		printmatrix(m3,r1,c2);
	}
	else
		printf("\nPRODUCT NOT POSSIBLE");
}
void readmatrix(int **m, int r, int c)
{
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("\nEnter Element: ");
		scanf(" %d", *(m+i)+j);
	}
}
}
void printmatrix(int **m, int r, int c)
{
	int i,j;
	for(i=0;i<r;i++){
		printf("\n");
	for(j=0;j<c;j++)
		printf(" %d", *(*(m+i)+j));
	}
}
void product(int **m1, int **m2, int **m3, int r1, int c2, int r2)
{
	int i,j,temp;
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(temp=0;temp<r2;temp++){
				*(*(m3+i)+j) += (*(*(m1+i)+temp))*(*(*(m2+temp)+j));
			}
		}
	}
}