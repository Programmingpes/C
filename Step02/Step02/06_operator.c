﻿#include <stdio.h>
int main(void) {
    int a = 10;
    printf("%d\n", 5 < a < 10);//조건이 2개 이상일는 적용 X
    /*
    *   논리연산자
    *       AND  :   &&    ---> 양쪽의 조건이 모두 true일 true
    *       OR   :   ||    ---> 양쪽의 조건이 하나라도 true면 true
    *       NOT  :   !     ---> true면 false, false면 true 뒤집는 연산자
    */
    printf("%d\n", a > 5 && a < 10);
    printf("%d\n", a < 5 || a > 7);
    printf("%d\n", !(a > 5));
    printf("%d\n", !a);

    return 0;
}