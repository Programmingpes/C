#include <stdio.h>

int main(void) {
    int n = 0xA;//16������ �տ� 0x �ڿ� 16������ ǥ��
    printf("%d, %x, %o\n", n, n, n);

    char bit = 0;
    const char option1 = 0x1; //0001
    const char option2 = 0x2; //0010
    const char option3 = 0x4; //0100 // 8
    const char option4 = 0x8; //1000 // 16

    //��Ʈ������ AND
    printf("%d\n", bit & option4);
    //��Ʈ������ OR
    printf("%d\n", bit | option3);
    //��Ʈ������ NOT
    printf("%d\n", ~bit);
    //��Ʈ������ XOR
    printf("%d\n", bit ^ option3);
    //����Ʈ ������
    printf("%d\n", 1 << 1); //2
    printf("%d\n", 1 << 2); //4
    printf("%d\n", 1 << 3); //8
    printf("%d\n", 1 << 4); //16
    printf("%d\n", 16 >> 1); //8
    printf("%d\n", 16 >> 2); //4
    printf("%d\n", 16 >> 3); //2
    printf("%d\n", 16 >> 4); //1

    return 0;
}