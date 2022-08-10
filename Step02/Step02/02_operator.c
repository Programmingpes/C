#include <stdio.h>
/*
	사칙 연산
		+ - * / %(나머지 나누기는 정수타입 변수에만 적용가능)

	정수 두개를 입력받아서
	사칙연산 결과를 출력
*/

int main(void) {
	int n1 = 0, n2 = 0;

	printf("숫자 두개 입력 : ");
	scanf("%d %d", &n1, &n2);

	printf("입력받은 숫자 : %d, %d\n", n1, n2);

	printf("덧셈 : %d\n", n1 + n2);
	printf("뺄셈 : %d\n", n1 - n2);
	printf("곱셈 : %d\n", n1 * n2);

	printf("나눗셈 : %d\n", n1 / n2);
	printf("나머지 나눗셈 : %d\n", n1 % n2);

	return 0;
}