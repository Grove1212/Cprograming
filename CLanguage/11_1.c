#include <stdio.h>

typedef struct Date {
	int year, month, day;
} DATE;

void printYMD(DATE* ymd, int i) {
	printf("날짜 %2d: %4d년 %2d월 %2d일\n", i, ymd->year, ymd->month, ymd->day);
}

int main() {
	DATE ymd[10] = { {2021,10,1}, {1999,12,8},{2010,3,10},{2004,5,30},{1971,1,12},
		{1971,6,3},{2000,12,12},{2002, 5,28},{2004,11,17},{2024,5,31} };

	for (int i = 0; i < 10; i++)
		printYMD(&ymd[i], i + 1);
}