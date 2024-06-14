#include <stdio.h>

int main(void) {
	int num;
	printf("정수를 입력하세요: ");
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

	printf("짝수합은 %d, 홀수합은 %d", evenSum, oddSum);

	return 0;
}