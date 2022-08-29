#include <iostream>
#include <cstring>
using namespace std;
class Person{
private:
//멤버 변수
    char *name;
    int age;
public:
    Person(){
        cout << "Person 기본 생성자" << endl;
    }
    Person(const char *n, int a){
        //name = n;
        name = new char[strlen(n)+1];
        strcpy(name, n);
        age = a;
        cout << "Person(const char *str, int a)" << endl;
    }
    ~Person(){
        delete[] name;
        cout << "Person 소멸자 호출" << endl;
    }
    void PrintPersonInfo(){
        cout << name << " , " << age << endl;
    }
    //this 자기 자신을 가리키는 포인터
    void SetAge(int age){
        this->age = age;
        //(*this).age = age;
    }
};
int main(void){
    Person p;// Person p = new Person();
    Person p1("홍길동",22);// Person p1 = new Person("홍길동",22);
    p1.SetAge(33);
    p1.PrintPersonInfo();
    return 0;
}






