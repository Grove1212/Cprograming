#include <stdio.h>

int main(void) {
	int year;
	printf("년도를 입력하세요 : ");
	scanf("%d", &year);

	if (IsLeapYear(year)) {
		printf("윤년입니다.\n");
	}
	else {
		printf("윤년이 아닙니다.\n");
	}
}

int IsLeapYear(int year) {
	if (year % 4) return 0;
	else return 1;
}