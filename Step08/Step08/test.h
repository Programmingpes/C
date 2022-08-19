//#pragma once //중복 include 막는 방법 - 1

//중복 include 막는 방법 - 2
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
