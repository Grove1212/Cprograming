#include <stdio.h>

int main(void) {
	int month, lastday;

	printf("월(month)을 입력하시오(1~12사이의 수 입력, 아닐 시 종료) : ");
	scanf("%d", &month);

	while (month >= 1 && month <= 12) {

		if (month <= 7) {
			if (month % 2 == 0) lastday = 30;
			else lastday = 31;
		}
		else {
			if (month % 2 == 0) lastday = 31;
			else lastday = 30;
		}

		printf("%d월의 마지막 날은 %d일 입니다.\n", month, lastday);

		printf("월(month)을 입력하시오(1~12사이의 수 입력, 아닐 시 종료) : ");
		scanf("%d", &month);
	}

	return 0;
}