#include <stdio.h>

int main(void) {
	int arr[10][10];
	for(int i = 0; i<10; i++)
		scanf("%s", arr[i]);
	for (int i = 0; i < 10; i++) {
		arr[i][0] = arr[i][0] - 32;
	}

	for (int i = 0; i < 10; i++)
		printf("%s ", arr[i]);

	return 0;
}