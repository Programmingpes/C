#include <stdio.h>
#include <stdlib.h>
//데이터 한건 저장하는 노드
typedef struct node{
    int val;
    struct node* next;
}Node;
//리스트를 관리할 구조체
typedef struct list
{
    int size;//저장된 노드 개수
    Node* header;//시작 노드
}List;
//리스트 초기화
void Init(List* list){
    list->size = 0;
    list->header = NULL;
}
//노드 추가
void NodeAppend(List* list, int num){
    //노드 하나 생성(동적할당)해서 val를 num으로 초기화, next는 NULL로 초기화
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = num;
    newNode->next = NULL;
    //첫번째 데이터는 list에 header에 저장
    Node *ptr = list->header;
    if(ptr == NULL){
        list->header = newNode;
        list->size++;  
        return; 
    }
    //마지막 노드를 찾음
    while(ptr->next != NULL) ptr = ptr->next;
    
    //마지막 노드의 next에 처음에 생성한 노드의 주소를 지정
    ptr->next = newNode;
}
//노드 검색 - num 검색할 데이터, return 할 데이터는 찾은 Node의 주소값을 리턴
Node* NodeSearch(List *list, int num){
    Node *ptr = list->header;

    while(ptr != NULL){
        if(ptr->val == num)
            return ptr;
        ptr = ptr->next;//다음 노드로 이동
    }
    return NULL;
}
//노드 수정 - search_data 검색할 데이터, new_data 수정할 데이터
void NodeUpdate(List* list, int search_data, int new_data){
    Node* ptr = NodeSearch(list, search_data);//검색 결과 받음
    if(ptr == NULL){
        printf("수정할 데이터가 없습니다\n");
    }else{
        ptr->val = new_data;
        printf("노드 데이터 수정 완료\n");
    }
}
//노드 삭제
//전체 노드 출력
void PrintAllNode(List* list){
    Node* ptr = list->header;
    if(list->size==0){
        printf("리스트에 저장된 내용이 없습니다.\n");
        return;
    }
    while(ptr!=NULL){
        printf("%d->",ptr->val);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int main(void){
    List list;
    Init(&list);

    NodeAppend(&list, 1);   PrintAllNode(&list);
    NodeAppend(&list, 2);   PrintAllNode(&list);
    NodeAppend(&list, 3);   PrintAllNode(&list);
    NodeAppend(&list, 4);   PrintAllNode(&list);
    NodeAppend(&list, 5);   PrintAllNode(&list);
    NodeAppend(&list, 6);   PrintAllNode(&list);
    NodeUpdate(&list, 4,10); PrintAllNode(&list);
    NodeUpdate(&list, 2,77); PrintAllNode(&list);
    NodeUpdate(&list, 100,10); PrintAllNode(&list);
    return 0;
}