#include <stdio.h>
#include <string.h>

int main(void) {
	char arr1[50], arr2[50], cat_arr[100];
	printf("두 영어 단어를 입력하시오. ");
	scanf("%s %s", arr1, arr2);

	//두 문자열의 순서를 정함
	if (strcmp(arr1, arr2) > 0) {
		char tmp[50];
		strcpy(tmp, arr1);
		strcpy(arr1, arr2);
		strcpy(arr2, tmp);
	}

	//문자열 붙이기
	strcpy(cat_arr, arr1);
	char* ptr1 = cat_arr + strlen(arr1);
	char* ptr2 = arr2;
	while (*ptr2 != '\0') {
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1 = '\0';

	printf("%s", cat_arr);
}