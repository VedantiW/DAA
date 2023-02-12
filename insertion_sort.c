// C program for insertion sort
#include <math.h>
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}


/* Driver program to test insertion sort */
int main()
{  int i,arr[5000] ;
	 for(i=0;i<5000;i++)
    {  arr[i]=rand()%5000 ;
    }
	int n = sizeof(arr) / sizeof(arr[0]);
 clock_t t;
    t = clock();
	insertionSort(arr, n);
	 t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("\nARR TOOK %f SECONDS TO EXECUTE \n",time_taken);


	return 0;
}

