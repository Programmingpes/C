#include <stdio.h>
#define SUM(A,B) A+B
//숫자 두개를 매개변수로 받아서 큰값을 구하는 매크로 함수 - MAX
 #define MAX(A,B) A > B ? A : B
//숫자 두개를 매개변수로 받아서 작은값을 구하는 매크로 함수 - MIN
int sum(int a, int b) {
    return a + b;
}
int main(void) {
    printf("%d\n", SUM(10, 20));
    printf("%d\n", MAX(10, 20));
    return 0;
}
