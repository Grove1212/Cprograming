#include <stdio.h>
#include <string.h>

int main() {
	char s[3][5];
	int i;

	strcpy_s(s[0], 5, "ab");
	strcpy_s(s[1], 5, "cdef");
	strcpy_s(s[2], 5, "ghi");

	s[2][0] = 'G';
	for (i = 0; i < 3; i++)
		printf("%s문자열의 길이 : %zd\n", s[i], strlen(s[i]));

	return 0;
}