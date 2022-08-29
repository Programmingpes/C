#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    //현재 날짜시간 뽑아서 시드값 설정 - 1
    //time_t t = time(NULL);//long 타입으로 현재시간값 리턴
    //printf("%ld\n\n",t);
    //srand((unsigned int)t);

    srand((unsigned int)time(NULL));

    for(int i=0;i<5;i++){
        printf("%d\n",rand());//정수를 랜덤하게 뽑음
    }


    return 0;
}