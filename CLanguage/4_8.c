#include <stdio.h>

int main(void) {
	int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	int oddSum = 0;
	int evenSum = 0;
	int i = 1;
	while (i <= num) {
		if (i % 2 == 0)
			evenSum += i;
		else
			oddSum += i;
		i++;
	}

	printf("¦������ %d, Ȧ������ %d", evenSum, oddSum);

	return 0;
}