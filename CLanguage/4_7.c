#include <stdio.h>

int main(void) {
	int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	int oddSum = 0;
	int evenSum = 0;
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0)
			evenSum += i;
		else
			oddSum += i;
	}

	printf("¦������ %d, Ȧ������ %d", evenSum, oddSum);

	return 0;
}