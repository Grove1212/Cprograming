#include <stdio.h>

int main(void) {
	int num;
	printf("1. �޴�1\n");
	printf("2. �޴�2\n");
	printf("3. �޴�3\n");
	printf(">>> ���� : ");
	scanf("%d", &num);

	if (num == 1)
		printf("�޴� %d�� ���õǾ����ϴ�.\n", num);
	else if (num == 2)
		printf("�޴� %d�� ���õǾ����ϴ�.\n", num);
	else if (num == 3)
		printf("�޴� %d�� ���õǾ����ϴ�.\n", num);
	else
		printf("�����Դϴ�.\n");

	return 0;
}