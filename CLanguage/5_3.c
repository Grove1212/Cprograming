#include <stdio.h>

int main(void) {
	printf("������ �Է��Ͻÿ� : ");
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

	printf("1���� N������ �հ� : %d\n", sum);
	printf("1���� N���� Ȧ���� �հ� : %d\n", oddSum);
	printf("1���� N���� ¦���� �հ� : %d\n", evenSum);

	return 0;
}