#include <stdio.h>
//�Լ��� ������� n�� 2�� n�� ����� ����, �� �ݺ��� X
int PowToNum(int n) {
    if (n == 0)
        return 1;
    return 2 * PowToNum(n - 1);
}
// n = 5
//return 2 * (return 2 * (return 2 * (return 2 * (return 2 * PowToNum(0)))))
//���� n�� �ش��ϴ� ���丮�� ���� ����( 5! ==> 1*2*3*4*5 )
int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}
int main(void) {
    int n;

    printf("���� �Է� : ");
    scanf_s("%d", &n);

    printf("2�� %d�� : %d\n", n, PowToNum(n));
    printf("%d! = %d\n", n, factorial(n));

    return 0;
}