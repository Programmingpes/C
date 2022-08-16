#include <stdio.h>

int main(void) {
    /*
    *   정수형 배열 길이가 5인 배열을 선언한 뒤
    *   배열의 모든 요소의 주소값을 출력
    */
    int arr[5] = { 0 };

    for (int i = 0; i < 5; i++) {
        printf("%p\n", &arr[i]);
    }
    /*
    *   double형 배열 길이가 5인 배열을 선언한 뒤
    *   배열의 모든 요소의 주소값을 출력
    */
    printf("------------\n");
    double darr[5];
    for (int i = 0; i < 5; i++) {
        printf("%p\n", &darr[i]);
    }
    return 0;
}