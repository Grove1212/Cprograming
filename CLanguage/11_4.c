#include <stdio.h>
#include <string.h>


int Compare(char arr1[], char arr2[], int cmpCapital) {
	char* p1 = arr1;
	char* p2 = arr2;
	int result = 0;

	while (*p1 != '\0' || *p2 != '\0') {
		if (cmpCapital == 1) {
			if (*p1 < *p2) {
				result = -1;
				break;
			}
			else if (*p1 > *p2) {
				result = 1;
				break;
			}
		}
		else if (cmpCapital == 0) {
			char ch1 = *p1, ch2 = *p2;
			if (ch1 >= 'a' && ch1 <= 'z')
				ch1 -= 32;
			if (ch2 >= 'a' && ch2 <= 'z')
				ch2 -= 32;

			if (ch1 < ch2) {
				result = -1;
				break;
			}
			else if (ch1 > ch2) {
				result = 1;
				break;
			}
		}
		
		p1++;
		p2++;
	}
	if (result == 0) {
		if (*p1 == '\0' && *p2 == '\0')
			return result;
		else if (*p1 == '\0')
			result = -1;
		else if (*p2 == '\0')
			result = 1;
	}

	return result;
}

int main(void) {
	char arr1[] = "Hello world";
	char arr2[] = "cmpright";
	int cmpCapital;

	printf("대소문자 구분여부(구분 : 1/ 구분x : 0) >> ");
	scanf("%d", &cmpCapital);

	printf("arr1 : %s, arr2 : %s\n", arr1, arr2);

	if (Compare(arr1, arr2, cmpCapital) == 1) {
		printf("%s이 더 큽니다.\n", arr1);
	}
	else if (Compare(arr1, arr2, cmpCapital) == -1) {
		printf("%s이 더 큽니다.\n", arr2);
	}
}