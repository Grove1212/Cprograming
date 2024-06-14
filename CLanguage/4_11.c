#include <stdio.h>

int main(void) {
	int num;
	printf("정수를 입력하세요 :");
	scanf("%d", &num);
	int factorial = 1;

	for (int i = 1; i <= num; i++) {
		factorial *= i;
	}

	printf("factorial is %d", factorial);

	return 0;
}