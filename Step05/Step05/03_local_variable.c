#include <stdio.h>
/*
	지역변수(local variable) -> stack 메모리에 저장
		{} 내에서 변수 선언하고 해당 {} 끝나면 메모리에서 해제되는 변수
*/

int main(void) {
	int i = 1, count = 200;
	if (i == 1) {
		int count = 100;
		printf("count : %d\n", count);
	}
	printf("count : %d\n", count);
	return 0;
}