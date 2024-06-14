#include <stdio.h>

int GetDaysOfMonth(int year, int month) {
	int day;
	if (month <= 7) {
		if (month % 2) day = 31;
		else if (month == 2 && year % 4 == 0) day = 29;
		else if (month == 2 && year % 4) day = 28;
		else day = 30;
	}
	else {
		if (month % 2) day = 30;
		else day = 31;
	}
	return day;
}

int main(void) {
	int year, month;
	printf("연도와 달을 입력하세요 :");
	scanf("%d %d", &year, &month);

	printf("%d년 %d월의 날짜 수는 %d일 입니다.\n", year, month, GetDaysOfMonth(year,month));

	return 0;
}