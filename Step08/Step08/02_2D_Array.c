#include <stdio.h>

int main(void) {
    //      3행 5열
    int arr1[3][5] = {
    //   0 1 2 3 4
        {1,2,3,4,5},//0
        {6,7,8,9,10},//1
        {11,12,13,14,15} //2
    };

    //arr1 처음부터 마지막까지 출력
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("-----------\n");
    int arr2[4][4] = {
        {1,2,3,4},
        {5,6},
        {7,8,9},
        {10}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("-----------\n");
    
    int arr3[5][5] = { 1,2,3,4,5,6,7,8,9 };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}