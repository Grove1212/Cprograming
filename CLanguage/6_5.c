#include <stdio.h>

int Power(int x, int y) {
	int result = 1;
	if (y == 0) x = 1; // y�� 0�̸� power�� 1.
	else {
		for (int i = 0; i < y; i++) result *= x;
	}
	return result;
}

int main(void) {
	int x, y;
	while (1) {
		printf("���� �� ���� �Է��Ͻÿ� : ");
		scanf("%d %d", &x, &y);

		if (y >= 0)	break;
		printf("y���� ����� �Է��ϼ���.\n");
	}

	printf("%d�� %d���� %d�Դϴ�.\n", x, y, Power(x, y));
	return 0;
}