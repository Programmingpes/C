#include <stdio.h>
//������(enum)
// ���ÿ� �������� ������ ����� ������ �Ҷ� ���
enum {
    A, B, C = 100, D, E, F
};
enum command {
    CREATE,  // ���� 0�� ����, �ʱ�ȭ�� ������ �ʱ�ȭ ������ 1�� �Ҵ�.
    READ,    // ���� 1�� ����
    UPDATE,  // ���� 2�� ����
    DELETE   // ���� 3�� ����
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