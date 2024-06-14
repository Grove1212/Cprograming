#include <stdio.h>

struct date {
	int year, month, day;
};

int count_date(const struct date* d1, const struct date* d2)
{
	int count = 0;
	struct date start = *d1;
	while(start.year != d2->year || start.month != d2->month || start.day != d2->day) {
		switch (start.month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if (start.day == 31) {
				start.month++;
				start.day = 1;
			}
			else
				start.day++;
			break;
		case 12:
			if (start.day == 31) {
				start.year++;
				start.month = 1;
				start.day = 1;
			}
			else
				start.day++;
			break;
		case 2:
			if (start.year % 4 != 0 && start.day == 28) {
				start.month++;
				start.day = 1;
			}
			else if (start.year % 4 == 0 && start.day == 29) {
				start.month++;
				start.day = 1;
			}
			else
				start.day++;
			break;
		default: // 4, 6, 9, 11
			if (start.day == 30) {
				start.month++;
				start.day = 1;
			}
			else
				start.day++;
			break;
		}
		count++;
	}
	return count;
}

int main(void)
{
	struct date d1 = { 2021, 4, 20 };
	struct date d2 = { 2024, 6, 8 };

	int date = count_date(&d1, &d2);

	printf("%4d년 %2d월 %2d일과 %4d년 %2d월 %2d일 사이의 날 수는 : %d일\n",
		d1.year, d1.month, d1.day, d1.year, d1.month, d1.day, date);

	return 0;
}