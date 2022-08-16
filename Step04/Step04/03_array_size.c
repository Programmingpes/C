#include <stdio.h>

int main(void) {
    //정수형 배열
    int arr1[5];
    //실수형 배열
    double arr2[6];
    //문자형 배열
    char str[10];

    printf("%d %d %d\n", sizeof(arr1), sizeof(arr2), sizeof(str));
    printf("%d %d %d\n", sizeof(arr1) / sizeof(int),
        sizeof(arr2) / sizeof(double), sizeof(str) / sizeof(char));
    return 0;
}