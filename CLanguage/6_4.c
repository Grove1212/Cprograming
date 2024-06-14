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
	printf("문자를 입력하세요 :");
	scanf("%c", &ch);

	if (IsLower(ch)) printf("이 문자는 소문자입니다.\n");
	else if (IsUpper(ch)) printf("이 문자는 대문자입니다.\n");
	else printf("잘못입력하셨습니다.\n");

	return 0;
}