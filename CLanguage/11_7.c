#include <stdio.h>

typedef struct point {
	int x, y;
}POINT;

typedef struct rect {
	POINT p1, p2;
} RECT;

POINT CenterOfRect(RECT rect) {
	POINT pt;
	pt.x = (rect.p1.x + rect.p2.x) / 2;
	pt.y = (rect.p1.y + rect.p2.y) / 2;
	
	return pt;
}

void InputRect(RECT* rect) {
	printf("�»����/���ϴ����� ��ǥ�� �Է��ϼ���(left, top, right, bottom ��)\n");
	scanf("%d %d %d %d", &rect->p1.x, &rect->p1.y, &rect->p2.x, &rect->p2.y);
}

int main(void) {
	RECT rect;
	InputRect(&rect);
	printf("�Էµ� ���簢�� : �»����=(%d, %d), ���ϴ���=(%d, %d)\n", rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);
	POINT point = CenterOfRect(rect);

	printf("���簢���� �߽� : (%d, %d)\n", point.x, point.y);
	return 0;
}