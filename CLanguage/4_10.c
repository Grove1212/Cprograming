#include <stdio.h>

int main(void) {
	int month, lastday;

	printf("��(month)�� �Է��Ͻÿ�(1~12������ �� �Է�, �ƴ� �� ����) : ");
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

		printf("%d���� ������ ���� %d�� �Դϴ�.\n", month, lastday);

		printf("��(month)�� �Է��Ͻÿ�(1~12������ �� �Է�, �ƴ� �� ����) : ");
		scanf("%d", &month);
	}

	return 0;
}