#include <stdio.h>

int main(void) {
    /*
    *   ������ �迭 ���̰� 5�� �迭�� ������ ��
    *   �迭�� ��� ����� �ּҰ��� ���
    */
    int arr[5] = { 0 };

    for (int i = 0; i < 5; i++) {
        printf("%p\n", &arr[i]);
    }
    /*
    *   double�� �迭 ���̰� 5�� �迭�� ������ ��
    *   �迭�� ��� ����� �ּҰ��� ���
    */
    printf("------------\n");
    double darr[5];
    for (int i = 0; i < 5; i++) {
        printf("%p\n", &darr[i]);
    }
    return 0;
}