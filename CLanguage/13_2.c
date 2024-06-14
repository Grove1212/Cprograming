#include <stdio.h>

struct date {
	int year, month, day;
};

void sort_date(struct date d[], int size);
void swap_date(struct date* d1, struct date* d2);
int cmp_date(struct date d1, struct date d2);
void sort_date(struct date d[], int size);
int partition(struct date d[], int low, int high);
void quickSort_date(struct date d[], int low, int high);
void print_date(struct date d[], int size);

int main(void) {
	struct date arr[10] = { {1950,6,25}, {1988,1,16}, {2040,3,5}, {1592,10,23}, {2000,8,15},
		{2022,6,16}, {1999,9,11}, {2021,5,1},{2022,12,31},{2012,6,30} };
	printf("정렬 전 배열에 저장된 날짜\n");
	print_date(arr, 10);
	sort_date(arr, 10);

	printf("정렬 후 배열에 저장된 날짜\n");
	print_date(arr, 10);

	return 0;
}
void swap_date(struct date *d1, struct date *d2) {
	struct date d3 = *d1;
	*d1 = *d2;
	*d2 = d3;
}
int cmp_date(struct date d1, struct date d2) {
	int result = 0;
	if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day)
		result = 0;
	else if (d1.year < d2.year)
		result = -1;
	else if (d1.year > d2.year)
		result = 1;
	else {
		if (d1.month < d2.month)
			result = -1;
		else if (d1.month > d2.month)
			result = 1;
		else {
			if (d1.day < d2.day)
				result = -1;
			else
				result = 1;
		}
	}
	return result;
}

void sort_date(struct date d[], int size) {
	quickSort_date(d, 0, size - 1);
}

int partition(struct date d[], int low, int high) {
	int pyvot = low;
	int i = low;
	for (int j = low + 1; j <= high; j++) {
		if (cmp_date(d[j], d[pyvot]) == -1) {
			i++;
			swap_date(&d[j], &d[i]);
		}
	}
	swap_date(&d[i], &d[low]);
	return i;
}

void quickSort_date(struct date d[], int low, int high) {
	if (low < high) {
		int pi = partition(d, low, high);
		quickSort_date(d, low, pi - 1);
		quickSort_date(d, pi + 1, high);
	}
}

void print_date(struct date d[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%4d년 %2d월 %2d일\n", d[i].year, d[i].month, d[i].day);
	}
}