#include <stdio.h>
/*
	포인터(Pointer)
		- 메모리 주소값만 저장하는 변수
		- 저장하고 있는 주소값을 이용하여 주소값 근처나,
		  해당 주소에 저장되어 있는 값을 읽고 쓰기가 가능함.
*/

int main(void) {
	int num = 10;
	int* ptr = &num;

	printf("%p %p\n", &num, ptr);
	printf("%d %d\n", num, *ptr);

	return 0;
}