#include <stdio.h>

struct date {
	int year, month, day;
};

int main(void) {
	struct date today = { 2024, 6, 8 };
	printf("%d�� %d�� %d��\n", today.year, today.month, today.day);

	return 0;
}