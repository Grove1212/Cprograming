#include <stdio.h>

void isCapital();
void isOdd();
void getFact();

int main(void) {
	int num;

	do {
		printf("1. ��ҹ��� Ȯ��\n");
		printf("2. Ȧ�� ¦�� Ȯ��\n");
		printf("3. N ���丮�� ���ϱ�(N!)\n");
		printf("0. ����\n");
		printf(">>> ���� : ");
		scanf(" %d", &num);

		if (num == 1) isCapital();
		else if (num == 2) isOdd();
		else if (num == 3) getFact();
		else if (num != 0)
			printf("�����Դϴ�.\n");
	} while (num != 0);

	return 0;
}

void isCapital() {
	char ch;
	printf("�����ڸ� �Է��ϼ��� : ");
	scanf(" %c", &ch);

	if (ch >= 'a' && ch <= 'z')
		printf("'%c'�� �ҹ����Դϴ�.\n\n", ch);
	else if (ch >= 'A' && ch <= 'Z')
		printf("'%c'�� �빮���Դϴ�.\n\n", ch);
}

void isOdd() {
	int n;
	printf("������ �Է��ϼ��� : ");
	scanf(" %d", &n);

	if (n % 2) printf("%d�� Ȧ���Դϴ�.\n\n", n);
	else printf("%d�� ¦���Դϴ�.\n\n", n);
}

void getFact() {
	int n, fact = 1;
	printf("������ �Է��ϼ��� : ");
	scanf(" %d", &n);

	for (int i = 1; i <= n; i++) {
		if (fact < 0) {
			printf("�����÷ο��Դϴ�.\n");
			return;
		}
		fact *= i;
	}

	printf("%d!�� %d�Դϴ�.\n\n", n, fact);
}