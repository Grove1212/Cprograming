#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[10][20];
	char tmp[20];

	printf("10���� ����ܾ �Է��ϼ���: ");
	for (int i = 0; i < 10; i++) {
		scanf("%s", &arr[i]);
	}

	//�������� ����(exchange sort)
	int index;
	for (int i = 0; i < 10 - 1; i++) {
		index = i;
		for (int j = i + 1; j < 10; j++) {
			if (strcmp(arr[index], arr[j]) > 0)
				index = j;
		}
		strcpy(tmp, arr[i]);
		strcpy(arr[i], arr[index]);
		strcpy(arr[index], tmp);
	}

	for (int i = 0; i < 10; i++)
		printf("%s\n", arr[i]);

	return 0;
}