#include <stdio.h>
#define SUM(A,B) A+B
//���� �ΰ��� �Ű������� �޾Ƽ� ū���� ���ϴ� ��ũ�� �Լ� - MAX
 #define MAX(A,B) A > B ? A : B
//���� �ΰ��� �Ű������� �޾Ƽ� �������� ���ϴ� ��ũ�� �Լ� - MIN
int sum(int a, int b) {
    return a + b;
}
int main(void) {
    printf("%d\n", SUM(10, 20));
    printf("%d\n", MAX(10, 20));
    return 0;
}
