#include <stdio.h>

int Power(int x, int y) {
	int result = 1;
	if (y == 0) x = 1; // y가 0이면 power는 1.
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
		printf("정수 두 개를 입력하시오 : ");
		scanf("%d %d", &x, &y);

		if (x == 0 && y == 0) break;

		if (y >= 0) {
			printf("%d의 %d승은 %d입니다.\n", x, y, Power(x, y));
		}
		else {
			printf("%d의 %d승은 %.3f입니다.\n", x, y, PowerD(x,y));
		}
		
	}

	return 0;
}