#include <stdio.h>

int main(void) {
	int num;
	printf("������ �Է��ϼ��� :");
	scanf("%d", &num);
	int factorial = 1;

	for (int i = 1; i <= num; i++) {
		factorial *= i;
	}

	printf("factorial is %d", factorial);

	return 0;
}