#include <stdio.h>

int main(void) {
    /*
        �Է¹��� ���� ������ �Է��� ��
        �Է��� ���ڸ�ŭ ���ڸ� �Է� �޾Ƽ�
        �Է� ���� ���ڵ��� ����� ���
        �� ����� ����Ҷ��� �Ҽ��� ��°�ڸ����� ���
    */ 
    int i=0, ea, num, total=0;

    printf("�Է� ���� ���� ���� �Է� : ");
    scanf("%d", &ea);

    for (i = 0; i < ea; i++) {
        printf("���� �Է� : ");
        scanf("%d", &num);
        total += num;
    }

    printf("�Է��Ͻ� ���ڵ��� ��� : %.2lf\n", (double)total / ea);

    return 0;
}