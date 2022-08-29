#include <iostream>
#include <cstring>
using namespace std;
/*
    학생 클래스 
        학번-문자열, 이름-문자열, 학과명-문자열, 평점-double

    생성자, 학생정보 출력할 함수

*/
class Student{
private:
    char *sno;
    char *name;
    char *major;
    double score;
public:
    Student(const char *sno,const char *name, const char *major, double score){
        this->sno = new char[strlen(sno)+1];
        strcpy(this->sno,sno);
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
        this->major = new char[strlen(major)+1];
        strcpy(this->major,major);

        this->score = score;
    }
    void PrintStudentInfo(){
        cout << sno << " " << name << " " << major << " " << score << endl;
    }
};
int main(void){
    //Student 배열 5개 선언을 하고 
    //Student arr[5];
    Student* arr[5];
    //5번 학생데이터를 입력 받은 후에 전체 출력
    for(int i=0;i<5;i++){
        char sno[30];
        cout << "학번 입력 : "; cin >> sno;
        char name[30];
        cout << "이름 입력 : "; cin >> name;
        char major[30];
        cout << "학과 입력 : "; cin >> major;
        double score;
        cout << "점수 입력 : "; cin >> score;
        arr[i] = new Student(sno, name, major, score);
    }
    for(int i=0;i<5;i++)
        arr[i]->PrintStudentInfo();
    return 0;
}