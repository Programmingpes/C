#include <stdio.h>
/*
*   사칙 연산
*       +   -   *   /   %(나머지 나누기 정수만 가능)
* 
*   정수 두개 입력을 받아서
*   사칙연산 결과를 출력
*/
int main(void) {
    int n1=0, n2=0;

    printf("숫자 입력 : ");
    scanf("%d %d", &n1, &n2);
    printf("%d\n", n1 + n2);
    printf("%d\n", n1 - n2);
    printf("%d\n", n1 * n2);
    printf("%d\n", n1 / n2);
    printf("%d\n", n1 % n2);

    return 0;
}