//BUBBLE SORT
#include <stdio.h>
void readarray(int n[], int size);
void displayarray(int n[], int size);
void bubblesort(int n[], int size);
int main(void){
	int n[100], size;
	printf("\n Enter size of the array: ");
	scanf(" %d", &size);
	readarray(n, size);
	printf("\n Before Sorting: ");
	displayarray(n, size);
	bubblesort(n, size);
	printf("\n After Sorting: ");
	displayarray(n, size);
return 0;
}
void readarray(int n[], int size){
	int i,k=1;
	for(i=0;i<size;i++,k++){
		printf("\n Enter Element %d: ", k);
		scanf(" %d", &n[i]);
	}
}
void displayarray(int n[], int size){
	int i;
	printf("\n The Array Elements are: ");
	for(i=0;i<size;i++){
		printf(" %d", n[i]);
	}
}
void bubblesort(int n[], int size){
	int i,j,temp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1;j++){
			if(n[j]>n[j+1]){
					temp=n[j];
					n[j]=n[j+1];
					n[j+1]=temp;
			}
		}
	}
}
