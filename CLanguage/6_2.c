#include <stdio.h>

int Round(double d) {
	int i;
	if ((int)(10 * d) % 10 >= 5) i = d + 1;
	else i = d;
	return i;
}

int main(void) {
	double d;
	printf("�Ǽ��� �Է��ϼ��� :");
	scanf("%lf", &d);

	printf("%f���� �ݿø��� ���� %d�Դϴ�.\n", d, Round(d));

	return 0;
}