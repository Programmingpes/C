#include <stdio.h>

int main(void) {

    /*
        ������ 2��~9�� ���
    */ 
    for (int dan = 2; dan < 10; dan++) {
        for (int is = 1; is < 10; is++) {
            printf("%d * %d = %d\n", dan, is, dan * is);
        }
    }

    return 0;
}