#include <stdio.h>
char* my_strcat(char d[], char s[]) {
	int di = 0, si = 0;
	while (d[di]) di++;

	while (s[si]) {
		d[di] = s[si];
		di++;
		si++;
	}
	d[di] = '\0';
	return d;
}

int main(void) {
	char arr[5][20];
	char result[100] = "";

	for (int i = 0; i < 5; i++) {
		printf("%d번째 단어를 입력하시오. ", i + 1);
		scanf(" %s", &arr[i]);
		my_strcat(result, &arr[i]);
	}
	
	printf("연결된 단어: %s\n", result);
}