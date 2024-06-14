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
	printf("좌상단점/우하단점의 좌표를 입력하세요(left, top, right, bottom 순)\n");
	scanf("%d %d %d %d", &rect->p1.x, &rect->p1.y, &rect->p2.x, &rect->p2.y);
}

int main(void) {
	RECT rect;
	InputRect(&rect);
	printf("입력된 직사각형 : 좌상단점=(%d, %d), 우하단점=(%d, %d)\n", rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);
	POINT point = CenterOfRect(rect);

	printf("직사각형의 중심 : (%d, %d)\n", point.x, point.y);
	return 0;
}