#include <stdio.h>
#include <math.h>

void printPoint(struct point pt[], int size);
double dist(struct point pt);
void sortPoint(struct point pt[], int size);

struct point {
	int x, y;
};

int main(void) {
	struct point pt[10] = { {4,5},{5,5},{6,6},{7,8},{6,7},{3,2},{2,2},{1,1},{1,0},{0,2} };
	printf("정렬 전 좌표 배열:");
	printPoint(pt, 10);

	sortPoint(pt, 10);

	printf("정렬 후 좌표 배열:");
	printPoint(pt, 10);

}

void printPoint(struct point pt[], int size) {
	for (int i = 0; i < size; i++) {
		printf("(%d, %d)", pt[i].x, pt[i].y);
	}
	printf("\n");
}

double dist(struct point pt) {
	return sqrt(pt.x * pt.x + pt.y * pt.y);
}

void sortPoint(struct point pt[], int size) {
	for (int i = 0; i < size; i++) {
		int index = i;
		for (int j = i+1; j <= size; j++) {
			if (dist(pt[index]) > dist(pt[j])) {
				index = j;
			}
		}
		struct point tmp = pt[i];
		pt[i] = pt[index];
		pt[index] = tmp;
	}
}