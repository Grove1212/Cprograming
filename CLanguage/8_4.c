#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[60];
	char* ptr;
	int flag;
	gets(arr);

	ptr = arr;
	flag = 1;
	while (*ptr != '\0') {
		if (flag) {
			*ptr = *ptr - 32;
			flag = 0;
		}
		ptr++;
		
		if (*ptr == ' ') {
			flag = 1;
			ptr++;
		}
	}

	puts(arr);

	return 0;
}