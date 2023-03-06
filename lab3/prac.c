#include <stdio.h>
#include<stdlib.h>

void selectionSort(int *a, unsigned int n ){
	unsigned int i , j , min;
	int temp;
	int oppcount =0;
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			++oppcount;
			if (a[j]<a[min])
				min =j;

		}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	}
	printf("\n Operatiom count %d \n",oppcount );

}

int main (){
	int *a;
	int i , n =5;
	for(int j=0;j<4;j++){
		a=(int *)malloc(sizeof(int)*n);
		for(int k=0;k<n;k++)
			printf("%d",a[i]);
		selectionSort(a,n);
		printf("\n");
		free(a);
		n=n+5
	}
	return 0}
