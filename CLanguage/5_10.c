#include <stdio.h>

int main(void) {
	int mon, lastDay;

	printf("���� �Է��Ͻÿ� : ");
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

		printf("%d���� ������ ���� %d���Դϴ�.\n", mon, lastDay);

		printf("���� �Է��Ͻÿ� : ");
		scanf("%d", &mon);
	}

	return 0;
}