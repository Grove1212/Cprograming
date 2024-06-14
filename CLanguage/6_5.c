#include <stdio.h>

int Power(int x, int y) {
	int result = 1;
	if (y == 0) x = 1; // y가 0이면 power는 1.
	else {
		for (int i = 0; i < y; i++) result *= x;
	}
	return result;
}

int main(void) {
	int x, y;
	while (1) {
		printf("정수 두 개를 입력하시오 : ");
		scanf("%d %d", &x, &y);

		if (y >= 0)	break;
		printf("y값은 양수로 입력하세요.\n");
	}

	printf("%d의 %d승은 %d입니다.\n", x, y, Power(x, y));
	return 0;
}