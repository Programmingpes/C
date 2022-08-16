#include <stdio.h>
/*
	전역변수 - 데이터 영역 사용
		모든 함수에서 동일한 변수를 사용
		전역변수는 함수 밖에다가 선언
*/
int count = 0;
int sum(int a, int b) {
	count++;
	return a + b;
}
int main(void) {
	//int count = -1;
	printf("sum : %d\n", sum(1, 2));
	printf("sum : %d\n", sum(3, 5));
	printf("sum : %d\n", sum(6, 2));
	printf("sum : %d\n", sum(1, 3));
	printf("count : %d\n", count);
	return 0;
}