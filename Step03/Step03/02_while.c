#include <stdio.h>

int main(void) {
    /*
    *   ���� �ϳ��� �Է� �޾Ƽ�
    *   �Է��� ������ �������� ���
    */
    int dan, is=1;

    printf("�� �Է� : ");
    scanf("%d", &dan);
    
    while (is < 10) {
        printf("%2d * %2d = %3d\n", dan, is, dan * is);
        is++;
    }
    return 0;
}