#include <stdio.h>

int main(void) {
	int i, a, b, sum = 0;
	printf("정수 두 개를 입력하시오 : ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	} // a가 작은 수, b가 큰 수

	if (a % 2) i = a; // a가 짝수라면 1을 더해서 i 값 초기화
	else i = a + 1;
	for (; i <= b; i += 2) {
		sum += i;
	}

	printf("%d와 %d 사이의 모든 홀수의 합은 %d입니다.\n", a, b, sum);

	return 0;
}