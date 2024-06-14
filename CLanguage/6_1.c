#include <stdio.h>

int Absolute(int d) {
	if (d < 0) d = -d;
	return d;
}

int main(void) {
	int i;
	printf("정수를 입력하세요 :");
	scanf("%d", &i);

	printf("%d의 절댓값은 %d입니다.\n", i, Absolute(i));

	return 0;
}