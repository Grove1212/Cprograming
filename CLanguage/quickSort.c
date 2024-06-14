#include <stdio.h>
#include <time.h>
#define SIZE 100

void swap(int* a, int* b);
int partition(int arr[], int low, int high);
void printArray(const int arr[], int size);
void quickSort(int arr[], int low, int high);

int main(void)
{
	int arr[SIZE], i;

	srand(time(0));
	for (i = 0; i < SIZE; i++)
		arr[i] = rand();

	printf("Unsorted array: \n");
	printArray(arr, SIZE);

	quickSort(arr, 0, SIZE - 1);
	printf("Sorted array: \n");
	printArray(arr, SIZE);

	return 0;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

#define KEY low// Partition function for quicksort
int partition(int arr[], int low, int high) {
	int pivot = arr[KEY];   // pivot element (can be chosen differently)    
	int i = low;           // index of smaller element    

	for (int j = low + 1; j <= high; j++) {
		// Check if current element is smaller than the pivot        
		if (arr[j] < pivot) {
			i++; // increment index of smaller element            
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i], &arr[low]);
	return i;
}

/* Recursive quicksort function */
void quickSort(int arr[], int low, int high) {
	if (low < high) {
		// pi is partitioning index, arr[p] is now at right place        
		int pi = partition(arr, low, high);
		// Recursively sort elements before and after partition        
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%8d ", arr[i]);
		if (i % 10 == 9)
			printf("\n");
	}
	printf("\n");
}
