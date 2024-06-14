#include <stdio.h>

struct date {
	int year, month, day;
};

void inc_date(struct date* d, int n)
{
	for (int i = 0; i < n; i++) {
		switch (d->month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if (d->day == 31) {
				d->month++;
				d->day = 1;
			}
			else
				d->day++;
			break;
		case 12:
			if (d->day == 31) {
				d->year++;
				d->month = 1;
				d->day = 1;
			}
			else
				d->day++;
			break;
		case 2:
			if (d->year % 4 != 0 && d->day == 28 ) {
				d->month++;
				d->day = 1;
			}
			else if (d->year % 4 == 0 && d->day == 29) {
				d->month++;
				d->day = 1;
			}
			else
				d->day++;
			break;
		default: // 4, 6, 9, 11
			if (d->day == 30) {
				d->month++;
				d->day = 1;
			}
			else
				d->day++;
			break;
		}
	}
}

int main(void)
{
	struct date d = { 2024, 6, 8 };

	inc_date(&d, 100);

	printf("2024년 6월 8일부터 100일 되는 날: %4d년 %2d월 %2d일\n",
		d.year, d.month, d.day);

	return 0;
}
