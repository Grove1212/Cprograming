#include <stdio.h>

int main(void) {
	int n, fact = 1;
	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d! = %d\n", i - 1, fact);
		fact *= i;
	}

	printf("%d! = %d\n", n, fact);

	return 0;
}