#include <stdio.h>
/*
	������(Pointer)
		- �޸� �ּҰ��� �����ϴ� ����
		- �����ϰ� �ִ� �ּҰ��� �̿��Ͽ� �ּҰ� ��ó��,
		  �ش� �ּҿ� ����Ǿ� �ִ� ���� �а� ���Ⱑ ������.
*/

int main(void) {
	int num = 10;
	int* ptr = &num;

	printf("%p %p\n", &num, ptr);
	printf("%d %d\n", num, *ptr);

	return 0;
}