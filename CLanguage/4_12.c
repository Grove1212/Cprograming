#include <stdio.h>

int main(void) {
	int num;
	printf("정수를 입력하세요 :");
	scanf("%d", &num);
	int factorial = 1;
	int i = 1;
	while (i <= num) {
		factorial *= i;
		i++;
	}

	printf("factorial is %d", factorial);

	return 0;
}