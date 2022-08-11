#include <stdio.h>

int main(void) {
    /*
    *   숫자 하나를 입력 받아서
    *   입력한 숫자의 구구단을 출력
    */
    int dan, is=1;

    printf("단 입력 : ");
    scanf("%d", &dan);
    
    while (is < 10) {
        printf("%2d * %2d = %3d\n", dan, is, dan * is);
        is++;
    }
    return 0;
}