#include <stdio.h>

int main(void) {
	printf("정수를 입력하시오 : ");
	int n;
	scanf("%d", &n);

	int i, sum = 0, oddSum = 0, evenSum = 0;
	for (i = 1; i <= n; i++) {
		sum += i;
	}

	i = 1;
	while (i <= n) {
		oddSum += i;
		i += 2;
	}

	i = 0;
	do {
		evenSum += i;
		i += 2;
	} while (i <= n);

	printf("1부터 N까지의 합계 : %d\n", sum);
	printf("1부터 N까지 홀수의 합계 : %d\n", oddSum);
	printf("1부터 N까지 짝수의 합계 : %d\n", evenSum);

	return 0;
}