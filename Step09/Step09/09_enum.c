#include <stdio.h>
//열거형(enum)
// 동시에 여러개의 정수형 상수를 만들어야 할때 사용
enum {
    A, B, C = 100, D, E, F
};
enum command {
    CREATE,  // 정수 0을 가짐, 초기화를 가지면 초기화 값부터 1씩 할당.
    READ,    // 정수 1을 가짐
    UPDATE,  // 정수 2를 가짐
    DELETE   // 정수 3을 가짐
};
int main(void) {
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    printf("%d\n", F);

    enum command c;

    c = DELETE;
    printf("%d\n", c);

    return 0;
}