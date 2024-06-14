#include <stdio.h>

double Absolute(double fnum);

int main(void) {
	double num;
	printf("실수값을 입력하시오 : ");
	scanf("%lf", &num);

	printf("절댓값은 %.3f이다\n", Absolute(num));

	return 0;
}

double Absolute(double fnum) {
	if (fnum < 0) fnum = -fnum;
	return fnum;
}