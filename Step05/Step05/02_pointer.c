#include <stdio.h>
/*

*/

int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr = &num1;

	printf("num1 �� �ּҰ� : %p, ptr�� �����ϰ� �ִ� �ּҰ� : %p\n", &num1, ptr);

	num1 += 1;
	*ptr += 1;

	printf("num1 �� �����ϰ� �ִ� �� : %d, ptr�� ����Ű�� �ִ� ����� �� : %d\n", num1, *ptr);

	ptr = &num2;
	printf("num2 �� �ּҰ� : %p, ptr�� �����ϰ� �ִ� �ּҰ� : %p\n", &num2, ptr);

	num2 += 1;
	*ptr += 1;

	printf("num2 �� �����ϰ� �ִ� �� : %d, ptr�� ����Ű�� �ִ� ����� �� : %d\n", num2, *ptr);

	return 0;
}