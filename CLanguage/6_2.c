#include <stdio.h>

int Round(double d) {
	int i;
	if ((int)(10 * d) % 10 >= 5) i = d + 1;
	else i = d;
	return i;
}

int main(void) {
	double d;
	printf("실수를 입력하세요 :");
	scanf("%lf", &d);

	printf("%f에서 반올림한 값은 %d입니다.\n", d, Round(d));

	return 0;
}