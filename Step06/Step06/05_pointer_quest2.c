#include <stdio.h>
/*
* ������ �迭 ���̰� 50�� �迭�� ����
* ���ڿ��� �Է� ���� ��
* �Է� ���� ���ڿ� ���̸� ���
*
* �Է� ���� ���ڿ��� ȸ��(palindrome) ���� üũ
* ���ڿ��� ȸ���̸� 'ȸ�� �Դϴ�.' ���
* ȸ���� �ƴϸ� 'ȸ���� �ƴմϴ�.' ���
*/
int main(void) {
    char str[50];
    char* s, * e;
    s = e = str;

    printf("���ڿ� �Է� : ");
    scanf("%s", str);

    while (*e != 0) e++;
    e--;

    printf("���ڿ� ���� : %d\n", e-s+1);

    while(s <= e){
        if (*s != *e) break;
    }
    if (s > e)
        printf("�Է��Ͻ� ���ڿ��� ȸ���� �ƴմϴ�.\n");
    else
        printf("�Է��Ͻ� ���ڿ��� ȸ���� �Դϴ�.\n");


    return 0;
}