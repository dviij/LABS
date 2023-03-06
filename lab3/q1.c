#include <stdio.h>
 
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int bubbleSort(int arr[], int n)
{
    int oppcount =0;
    int i, j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1])
            	oppcount++;
                swap(&arr[j], &arr[j + 1]);
        }
    }
        
    return oppcount;            
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int n ;
    printf("enter the size of the aray ");
    scanf("%d",&n);
   int arr[n];
    printf("enter the values of the array ");
    for(int f = 0;f<n;f++){
    	scanf("%d",&arr[f]);}
	bubbleSort(arr,n);
    printf("Sorted array: \n");
    printArray(arr,n);
    int oppcount=bubbleSort(arr,n);
    printf("the oppcount is %d",oppcount);
    return 0;
}