#include <stdio.h>

int main(void) {
	int mon, lastDay;

	printf("월을 입력하시오 : ");
	scanf("%d", &mon);

	while (mon >= 1 && mon <= 12) {
		switch (mon) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			lastDay = 31;
			break;
		default:
			lastDay = 30;
			break;
		}

		printf("%d월의 마지막 날은 %d일입니다.\n", mon, lastDay);

		printf("월을 입력하시오 : ");
		scanf("%d", &mon);
	}

	return 0;
}