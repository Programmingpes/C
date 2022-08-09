#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// 프로젝트 설정에 SDL 검사 -> 아니오 설정해야 SCANF가 실행됨
int main(void) {
	int a = 0;

	printf("숫자 입력 : ");
	scanf("%d", &a);

	printf("입력 받은 정수 : %d\n", a);

	return 0;
}