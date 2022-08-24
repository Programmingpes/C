#include <stdio.h>
struct Point {
	int x;
	int y;
};

struct Wrapper {
	int i;
	char c[3];
	double d;
};

int main(void) {
	struct Point p;
	struct Wrapper w;
	p.x = 10;
	p.y = 20;

	printf("%d %d\n", p.x, p.y);
	printf("Point size : %d\n", sizeof(struct Point)); // int 2°³ : 8byte
	printf("%p\n", &p);
	printf("%p %p\n", &p.x, &p.y);

	printf("Wrapper size : %d\n", sizeof(struct Wrapper)); // 
	printf("%p\n", &w);
	printf("%p %p %p\n", &w.i, &w.c, &w.d);


	return 0;
}