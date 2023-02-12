// C program for implementation of selection sort
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		if(min_idx != i)
			swap(&arr[min_idx], &arr[i]);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d , ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{  int i ,arr[5000] ;
 
   
   for(i=0;i<5000;i++)
    {  arr[i]=rand()%5000 ;
    }
 int n = sizeof(arr)/sizeof(arr[0]);
  clock_t t;
    t = clock();
    selectionSort(arr, n);
     t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("\nARR TOOK %f SECONDS TO EXECUTE \n",time_taken);
	return 0;
	
}
