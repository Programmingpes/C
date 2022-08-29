#include <stdio.h>
#include <stdlib.h>

//스택 - 동적할당
int *stack = NULL;
//스택 사이즈
int size = 0;
//데이터를 추가할 위치
int top = 0;

//스택을 초기화
// 스택 사이즈를 받아서 동적할당
void Init(){
    printf("스택 사이즈 입력 : ");
    scanf("%d", &size);
    if(stack != NULL){
        free(stack);
        stack = NULL;
    }
    stack = (int *)malloc(sizeof(int) * size);
    top = 0;
}
//데이터를 추가 - n : 추가할 데이터, 추가 실패시 0 리턴
int Push(int n){
    //1. 저장할 공간이 있는지 체크 ---> 저장할 공간이 없으면 0 리턴
    if(size == top) return 0;
    //2. stack에 데이터를 저장
    stack[top] = n;
    //3. top을 증가
    top++;
    return 1;
}
//데이터를 뽑음 - 뽑은 데이터를 리턴
int* Pop(){
    //1. 저장한 데이터가 있는지 체크 : top이 0인지 체크
    //   0이면 NULL 리턴
    if(top == 0) return  NULL;
    //2. top 감소
    //3. top이 가리키고 있는 배열 요소의 주소를 리턴
    return &stack[--top];
}
int main(void){
    int no;

    Init();

    while(1){
        printf("1. push\n");
        printf("2. pop\n");
        printf("0. exit\n");
        printf("input menu no : ");
        scanf("%d",&no);

        if(no == 1){
            int n;
            printf("추가할 숫자 입력 : ");
            scanf("%d",&n);
            if(Push(n))
                printf("데이터 추가 성공\n");
            else
                printf("데이터 추가 실패\n");
        }else if(no == 2){
            int *n = Pop();
            if(n == NULL)
                printf("스택에 데이터가 없습니다\n");
            else
                printf("POP : %d\n",*n);
        }else if(no == 0){
            break;
        }
    }

    return 0;
}