#include <stdio.h>

int main(void) {
	int year;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf("%d", &year);

	if (IsLeapYear(year)) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("������ �ƴմϴ�.\n");
	}
}

int IsLeapYear(int year) {
	if (year % 4) return 0;
	else return 1;
}