#include <stdio.h>

int main(void) {
	int n, fact = 1;
	printf("정수 입력 : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		fact *= i;
	}

	printf("%d의 팩토리얼은 %d\n", n, fact);

	return 0;
}