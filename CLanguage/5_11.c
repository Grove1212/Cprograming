#include <stdio.h>

double Absolute(double fnum);

int main(void) {
	double num;
	printf("�Ǽ����� �Է��Ͻÿ� : ");
	scanf("%lf", &num);

	printf("������ %.3f�̴�\n", Absolute(num));

	return 0;
}

double Absolute(double fnum) {
	if (fnum < 0) fnum = -fnum;
	return fnum;
}