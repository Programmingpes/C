#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//배열을 출력하는 함수
void PrintArray(int *arr){
    for(int i=0;i<7;i++){
        printf("%2d ",arr[i]);
    }
    printf("\n");
}
//배열에 중복된 값이 있는지 체크하는 함수
int CheckNumber(int *arr, int n){
    for(int i=0;i<7;i++){
        if(arr[i] == n) return i;
    }
    return -1;
}
int main(void){
    srand((unsigned int)time(NULL));
    int lotto[7] = {0};
    //로또번호 한셋트만 배열에 저장해서 출력
    for(int i=0;i<7;i++){
        int n = rand() % 45 + 1;//1~45
        if(CheckNumber(lotto,n) != -1){
            i--;
            continue;
        }
        lotto[i] = n;
    }
    PrintArray(lotto);
    return 0;
}
