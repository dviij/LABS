#include <stdio.h>
#include <stdlib.h>
int bubblesort(int *a, int n){
	int i,j,temp,OpCount=0;
	for (i=0;i< n-1;i++){
        for (j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                	OpCount++;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return OpCount;
}
int main(){
	int i,j,n,temp,OpCount;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int * a=(int *)malloc(n*sizeof(int));
	printf("Enter the elements : \n");
	for(i =0; i<n;i++)
		scanf("%d",&a[i]);
	OpCount=bubblesort(a,n);
	printf("Sorted array is ");
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nOp Count : %d\n",OpCount);
}