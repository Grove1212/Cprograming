#include <stdio.h>
#include <string.h>


void RemoveSpace(char* sourse, char* result, int* cnt) {
	char* sp = sourse;
	char* rp = result;

	while (*sp != '\0') {
		if (*sp == ' ' || *sp == '\t' ||
			*sp == '\v' || *sp == '\n' || *sp == '\f' || *sp == '\r') {
			sp++;
			(*cnt)++;
			continue;
		}
		*rp = *sp;
		rp++;
		sp++;
	}
	*rp = '\0';
}

int main(void) {
	char arr[100];
	int removedChar = 0;
	char result[100];

	printf("문자열을 입력하세요 : ");
	gets(arr);

	RemoveSpace(arr, result, &removedChar);

	printf("결과 문자열 : %s\n", result);
	printf("제거된 공백 문자 개수 : %d\n", removedChar);

	return 0;
}