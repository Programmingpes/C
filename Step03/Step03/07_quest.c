#include <stdio.h>
/*
    ���� �ϳ� �Է� ���� ��
    �Է¹��� ������ŭ �ﰢ���� ���
    ���� �Է� : 7
                �ٹ�ȣ     ������    ���� ����
          *     1           1       6
         **     2           2       5
        ***     3           3       4
       ****     4           4       3
      *****     5           5       2
     ******     6           6       1
    *******     7           7       0
*/
int main(void) {
    int line;

    printf("�� ���� : ");
    scanf("%d", &line);

    for (int i = 1; i <= line; i++) {
        for (int j = 0; j < line - i; j++)
            printf(" ");

        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}




