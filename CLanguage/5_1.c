#include <stdio.h>

int main(void) {
	int num;
	printf("1. 메뉴1\n");
	printf("2. 메뉴2\n");
	printf("3. 메뉴3\n");
	printf(">>> 선택 : ");
	scanf("%d", &num);

	if (num == 1)
		printf("메뉴 %d이 선택되었습니다.\n", num);
	else if (num == 2)
		printf("메뉴 %d이 선택되었습니다.\n", num);
	else if (num == 3)
		printf("메뉴 %d이 선택되었습니다.\n", num);
	else
		printf("오류입니다.\n");

	return 0;
}