#include <stdio.h>

int main(void) {
	int num;
	printf("������ �Է��ϼ��� :");
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