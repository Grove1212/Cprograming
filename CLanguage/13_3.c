#include <stdio.h>
#include <string.h>
#define SIZE 15

void char_sort(char d[][SIZE], int size);
int partition(char d[][SIZE], int low, int high);
void swap_char(char ch1[], char ch2[]);
void quickSort_char(char d[][SIZE], int low, int high);

int main(void) {
	char arr[6][SIZE] = { "melon", "apple", "banana", "cherry", "peach", "pineapple" };

	char_sort(arr, 6);

	for (int i = 0; i < 6; i++) {
		printf("%s\n", arr[i]);
	}
	return 0;
}

void char_sort(char d[][SIZE], int size) {
	quickSort_char(d, 0, size - 1);
}

int partition(char d[][SIZE], int low, int high) {
	int pivot = low;
	int i = low;
	for (int j = low + 1; j <= high; j++) {
		if (strcmp(d[j], d[pivot]) < 0) {
			i++;
			swap_char(d[j], d[i]);
		}
	}
	swap_char(d[i], d[pivot]);
	return i;
}

void swap_char(char ch1[], char ch2[]) {
	char tmp[SIZE];
	strcpy(tmp, ch1);
	strcpy(ch1, ch2);
	strcpy(ch2, tmp);
}

void quickSort_char(char d[][SIZE], int low, int high) {
	if (low < high) {
		int pi = partition(d, low, high);
		quickSort_char(d, low, pi - 1);
		quickSort_char(d, pi + 1, high);
	}
}