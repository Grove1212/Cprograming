#include <stdio.h>

int IsLower(char c) {
	if (c >= 'a' && c <= 'z') return 1;
	return 0;
}

int IsUpper(char c) {
	if (c >= 'A' && c <= 'Z') return 1;
	return 0;
}

int main(void) {
	char ch;
	printf("���ڸ� �Է��ϼ��� :");
	scanf("%c", &ch);

	if (IsLower(ch)) printf("�� ���ڴ� �ҹ����Դϴ�.\n");
	else if (IsUpper(ch)) printf("�� ���ڴ� �빮���Դϴ�.\n");
	else printf("�߸��Է��ϼ̽��ϴ�.\n");

	return 0;
}