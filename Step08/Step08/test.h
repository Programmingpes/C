//#pragma once //�ߺ� include ���� ��� - 1

//�ߺ� include ���� ��� - 2
#ifndef __TEST_H__ 
#define __TEST_H__
#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}
void max(int a, int b) {
    if (a > b)
        printf("%d\n", a);
    else
        printf("%d\n", b);
}
#endif
