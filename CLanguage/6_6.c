#include <stdio.h>

int Power(int x, int y) {
	int result = 1;
	if (y == 0) x = 1; // y�� 0�̸� power�� 1.
	else {
		for (int i = 0; i < y; i++) result *= x;
	}
	return result;
}

double PowerD(int x, int y) {
	int result = 1;
	double fin;
	for (int i = 0; i < -y; i++) result *= x;
	fin = 1.0 / result;
	return fin;
}

int main(void) {
	int x, y;
	double result;
	while (1) {
		printf("���� �� ���� �Է��Ͻÿ� : ");
		scanf("%d %d", &x, &y);

		if (x == 0 && y == 0) break;

		if (y >= 0) {
			printf("%d�� %d���� %d�Դϴ�.\n", x, y, Power(x, y));
		}
		else {
			printf("%d�� %d���� %.3f�Դϴ�.\n", x, y, PowerD(x,y));
		}
		
	}

	return 0;
}