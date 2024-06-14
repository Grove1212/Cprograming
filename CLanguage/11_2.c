#include <stdio.h>

typedef struct Date {
	int year, month, day;
} DATE;

void printYMD(DATE* ymd, int i) {
	printf("날짜 %2d: %4d년 %2d월 %2d일\n", i, ymd->year, ymd->month, ymd->day);
}

int CompareDate(DATE d1, DATE d2) {
	int flag = 0;
	if (d1.year < d2.year)
		flag = -1;
	else if (d1.year > d2.year)
		flag = 1;
	else {
		if (d1.month < d2.month)
			flag = -1;
		else if (d1.month > d2.month)
			flag = 1;
		else {
			if (d1.day < d2.day)
				flag = -1;
			else if (d1.day > d2.day)
				flag = 1;
		}
	}
	return flag;
}

void dateSort(DATE* dates, int size) {
	int index;
	for (int i = 0; i < size - 1; i++) {
		index = i;
		for (int j = i+1; j < size; j++)
		{
			if (CompareDate(dates[index], dates[j]) == 1) {
				index = j;// 더 작은값을 리턴 index가 더 작을 때
			}
		}
		DATE tmp = dates[i];
		dates[i] = dates[index];
		dates[index] = tmp;
	}
}

int main() {
	DATE ymd[10] = { {2021,10,1}, {1999,12,8},{2010,3,10},{2004,5,30},{1971,1,12},
		{1971,6,3},{2000,12,12},{2002, 5,28},{2004,11,17},{2024,5,31} };

	dateSort(ymd, 10);

	for (int i = 0; i < 10; i++)
		printYMD(&ymd[i], i + 1);
}