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
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
#define KEY low
int partition(int arr[], int low, int high) {
	int pivot = arr[KEY];
	int i = low;
	for (int j = low + 1; j <= high; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
		swap(&arr[i], &arr[low]);
	}
	return i;
}
void printArray(const int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%8d ", arr[i]);
		if(i % 10 == 9)
			printf("\n");
	}
	
}
void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
