#include <stdio.h>

int main(void) {
	int n, fact = 1;
	printf("���� �Է� : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		fact *= i;
	}

	printf("%d�� ���丮���� %d\n", n, fact);

	return 0;
}