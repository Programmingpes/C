#include <stdio.h>
//파일 읽고 쓰기 
void ex1(){
    //fopen : 파일 열기 함수 --> 오픈한 파일을 FILE 포인터로 리턴
    /*
        w : 쓰기 모드, r : 읽기 모드, a : 추가 모드
        t : 텍스트, b : 이진        
    */
    FILE* file = fopen("t1.txt","wt");    

    if(file == NULL){
        printf("파일 포인터 생성 실패 \n");
        return;
    }
    fprintf(file,"안녕하세요, %d\n",30);
    fprintf(file,"안녕하세요, %d\n",20);
    fprintf(file,"안녕하세요, %d\n",33);
    fprintf(file,"안녕하세요, %d\n",345);
    fputs("Hello World",file);
    fputs("Hello World",file);
    fputs("Hello World",file);
    fclose(file);//파일 닫기

}
void ex2(){
    FILE* file = fopen("t1.txt","rt");

    if(file == NULL){
        printf("읽어들일 파일이 없습니다.\n");
        return;
    }
    char buffer[1024];
    while(1){
        if(fgets(buffer,sizeof(buffer),file)==NULL)
            break;
        printf("%s",buffer);
    }
}
typedef struct member{
    char name[20];
    int age;
}Member;
void ex3(){
    Member arr[3]={
        {"김철수",20},
        {"이영수",33},
        {"박영희",44}
    };
    FILE* file = fopen("member.dat","wb");
    if(file == NULL){
        printf("파일 생성 실패\n");
        return;
    }
    fwrite(arr,sizeof(Member),3,file);
    fclose(file);
}
void ex4(){
    Member arr[3];
    FILE* file = fopen("member.dat","rb");
    if(file == NULL){
        printf("파일 열기 실패\n");
        return;
    }
    int i = 0;
    while(fread(&arr[i],sizeof(Member),1,file))i++;
    
    for(i=0;i<3;i++){
        printf("%s %d\n",arr[i].name,arr[i].age);
    }
    
    fclose(file);
}
void ex5() {

    // fopen_s() 함수 : FILE 포인터를 만드는 함수

    FILE* fp;
    int err = fopen_s(&fp, "t2.txt", "w");

    // FILE 포인터 생성 확인
    // errno_t 타입은 실제로 정수를 의미함.
    // FILE 포인터가 생성되면 0을 반환함.
    if (err != 0) {
        printf("파일 포인터 생성 실패\n");
        return;  // 함수 종료
    }

    // FILE 포인터 닫기
    fclose(fp);

}
int main(void){
//    ex1();
    // ex2();
    // ex3();
    ex4();
    return 0;
}