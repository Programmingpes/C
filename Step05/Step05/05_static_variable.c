#include <stdio.h>
/*
*   static ����
*       �Լ��� �������� ��� �����ؾ� �Ǵ� ���� ������
*       static���� ���� ������ �ϸ� stack�� �ƴ϶� ������ ������ �޸𸮸� �Ҵ�
*       static�� ���α׷� ����� ���� �޸𸮰� �Ҵ�
*/

int sum(int a, int b) {
    static int count = 0;//���α׷� ������ �ɶ� �ѹ� �����. �Լ� �����Ҷ����� ���� X
    count++;
    printf("count : %d\n", count);
    return a + b;
}
int main(void) {
    sum(10, 2);
    sum(10, 2);
    sum(10, 2);
    sum(10, 2);
    sum(10, 2);
    return 0;
}