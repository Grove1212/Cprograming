#include <stdio.h>

int Absolute(int d) {
	if (d < 0) d = -d;
	return d;
}

int main(void) {
	int i;
	printf("������ �Է��ϼ��� :");
	scanf("%d", &i);

	printf("%d�� ������ %d�Դϴ�.\n", i, Absolute(i));

	return 0;
}