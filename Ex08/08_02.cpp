#include <stdio.h>

int main(void) {
	int x;
	int* p;

	p = &x;
	*p = 10;

	printf("*p = %d\n", *p);
	printf("x = %d\n", x);
	printf("p = %d\n", p);
	printf("&x = %d\n", &x);

	printf("&p = %d\n", &p);

	return 0;
}