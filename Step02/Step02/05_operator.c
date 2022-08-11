#include <stdio.h>
/*
*   관계(비교) 연산자
*       >  <  >=  <=  ==  !=
*   관계 연산자 결과
*       참(true) - 1, 거짓(false) - 0
*/
int main(void) {
    int a = 10;

    printf("%d\n", a < 20);
    printf("%d\n", a > 20);
    printf("%d\n", a <= 10);
    printf("%d\n", a >= 10);
    printf("%d\n", a != 10);
    printf("%d\n", a == 10);
    printf("sizeof %d\n", sizeof(a < 20));

    return 0;
}