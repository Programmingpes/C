#include <stdio.h>
#define QUEUE_SIZE 11

int queue[QUEUE_SIZE];
int front=0, rear=0;

//큐에 저장된 내용을 전부 출력
void PrintQueue(){
    for(int i=0;i<QUEUE_SIZE;i++)
        printf("%d ",queue[i]);
    printf("\n");
}
//큐에 데이터를 입력 받아서 저장
void Enque(){
    //1. 큐에 저장될 공간이 있는지 체크 (rear + 1) % QUEUE_SIZE == front
    if((rear + 1) % QUEUE_SIZE == front){
        printf("더이상 저장할 공간이 없습니다.\n");
        return;
    }
    //2. 숫자 입력 받아서 저장
    printf("저장할 숫자 입력 : ");
    scanf("%d",&queue[rear]);
    //3. 다음 위치로 이동
    rear = (rear + 1) % QUEUE_SIZE;
    //4. 큐에 저장된 내용을 전부 출력
    PrintQueue();
}
//큐에 저장된 데이터를 뽑음
void Deque(){
    //1. 큐가 비어 있는지 체크
    if(rear == front) {
        printf("큐가 비어있습니다\n");
        return;
    }
    //2. 데이터를 뽑아서 출력
    printf("뽑은 데이터 : %d\n",queue[front]);
    //3. 데이터를 뽑은 자리는 -1로 초기화
    queue[front] = -1;
    //4. 다음 위치로 이동
    front = (front + 1) % QUEUE_SIZE;
    //5. 큐 전체 출력
    PrintQueue();
}
int main(void){
    int no;
    while (1) {
        printf("1. 데이터 추가\n");
        printf("2. 데이터 읽기\n");
        printf("0. 프로그램 종료\n");
        printf("메뉴번호를 입력하세요 : ");
        scanf("%d", &no);
        if (no == 1) Enque();
        else if (no == 2) Deque();
        else break;
    }
    return 0;
}