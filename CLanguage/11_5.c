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

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(arr);

	RemoveSpace(arr, result, &removedChar);

	printf("��� ���ڿ� : %s\n", result);
	printf("���ŵ� ���� ���� ���� : %d\n", removedChar);

	return 0;
}