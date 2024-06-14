#include <stdio.h>

int main(void) {
	int n;
	char ch;

	do {
		printf("정수를 입력하세요 : ");
		scanf("%d", &n);
		if (n % 2) printf("%d는 홀수입니다.\n", n);
		else printf("%d는 짝수입니다.\n", n);
		
		getchar(); // 버퍼 비우기

		printf("계속 하시겠습니까? (Y/N) ");
		scanf("%c", &ch);

	} while (ch == 'y');

	return 0;
}