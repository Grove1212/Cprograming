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
	printf("������ ���� �Է��ϼ��� :");
	scanf("%d %d", &year, &month);

	printf("%d�� %d���� ��¥ ���� %d�� �Դϴ�.\n", year, month, GetDaysOfMonth(year,month));

	return 0;
}