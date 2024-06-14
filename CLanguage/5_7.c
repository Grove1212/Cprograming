#include <stdio.h>

void isCapital();
void isOdd();
void getFact();

int main(void) {
	int num;

	do {
		printf("1. 대소문자 확인\n");
		printf("2. 홀수 짝수 확인\n");
		printf("3. N 팩토리얼 구하기(N!)\n");
		printf("0. 종료\n");
		printf(">>> 선택 : ");
		scanf(" %d", &num);

		if (num == 1) isCapital();
		else if (num == 2) isOdd();
		else if (num == 3) getFact();
		else if (num != 0)
			printf("오류입니다.\n");
	} while (num != 0);

	return 0;
}

void isCapital() {
	char ch;
	printf("영문자를 입력하세요 : ");
	scanf(" %c", &ch);

	if (ch >= 'a' && ch <= 'z')
		printf("'%c'는 소문자입니다.\n\n", ch);
	else if (ch >= 'A' && ch <= 'Z')
		printf("'%c'는 대문자입니다.\n\n", ch);
}

void isOdd() {
	int n;
	printf("정수를 입력하세요 : ");
	scanf(" %d", &n);

	if (n % 2) printf("%d는 홀수입니다.\n\n", n);
	else printf("%d는 짝수입니다.\n\n", n);
}

void getFact() {
	int n, fact = 1;
	printf("정수를 입력하세요 : ");
	scanf(" %d", &n);

	for (int i = 1; i <= n; i++) {
		if (fact < 0) {
			printf("오버플로우입니다.\n");
			return;
		}
		fact *= i;
	}

	printf("%d!은 %d입니다.\n\n", n, fact);
}