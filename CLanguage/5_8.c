#include <stdio.h>

int main(void) {
	int i, a, b, sum = 0;
	printf("���� �� ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	} // a�� ���� ��, b�� ū ��

	if (a % 2) i = a; // a�� ¦����� 1�� ���ؼ� i �� �ʱ�ȭ
	else i = a + 1;
	for (; i <= b; i += 2) {
		sum += i;
	}

	printf("%d�� %d ������ ��� Ȧ���� ���� %d�Դϴ�.\n", a, b, sum);

	return 0;
}