#include <stdio.h>

int main(void) {
	int n;
	char ch;

	do {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &n);
		if (n % 2) printf("%d�� Ȧ���Դϴ�.\n", n);
		else printf("%d�� ¦���Դϴ�.\n", n);
		
		getchar(); // ���� ����

		printf("��� �Ͻðڽ��ϱ�? (Y/N) ");
		scanf("%c", &ch);

	} while (ch == 'y');

	return 0;
}