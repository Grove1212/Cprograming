#include <stdio.h>
#include <math.h>
#define SIZE 5

void InputArray(double arr[], int size) {
	printf("5���� �Ǽ��� �Է��ϼ��� : ");
	for (int i = 0; i < size; i++) {
		scanf(" %lf", &arr[i]);
	}
}

void PrintArray(double arr[], int size) {
	printf("�迭 : ");
	for (int i = 0; i < size; i++) {
		printf("%.2f ", arr[i]);
	}
	printf("\n");
}

double Average(double arr[], int size) {
	double avg = 0;
	for (int i = 0; i < size; i++) {
		avg += arr[i];
	}

	return avg / size;
}

double Variance(double arr[], int size) {
	double avg = Average(arr, size);
	double var = 0;
	for (int i = 0; i < size; i++) {
		var += (arr[i] - avg) * (arr[i] - avg);
	}

	return var / size;
}

double StandardDeviation(double arr[], int size) {
	double var = Variance(arr, size);
	return sqrt(var);
}

int main(void) {
	double arr[SIZE];
	InputArray(arr, SIZE);
	PrintArray(arr, SIZE);
	printf("�л� : %f\n", Variance(arr, SIZE));
	printf("ǥ������ : %f\n", StandardDeviation(arr, SIZE));

	return 0;
}