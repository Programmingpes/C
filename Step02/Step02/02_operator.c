#include <stdio.h>
/*
*   ��Ģ ����
*       +   -   *   /   %(������ ������ ������ ����)
* 
*   ���� �ΰ� �Է��� �޾Ƽ�
*   ��Ģ���� ����� ���
*/
int main(void) {
    int n1=0, n2=0;

    printf("���� �Է� : ");
    scanf("%d %d", &n1, &n2);
    printf("%d\n", n1 + n2);
    printf("%d\n", n1 - n2);
    printf("%d\n", n1 * n2);
    printf("%d\n", n1 / n2);
    printf("%d\n", n1 % n2);

    return 0;
}