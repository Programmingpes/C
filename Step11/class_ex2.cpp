#include <iostream>
#include <cstring>
using namespace std;
class Person{
private:
    char *name;
    int age;
public:
    Person(){
        cout << "Person 기본 생성자" << endl;
    }
    Person(const char *n, int a){
        name = new char[strlen(n)+1];
        strcpy(name, n);
        age = a;
        cout << "Person(const char *str, int a)" << endl;
    }
    //복사 생성자
    Person(const Person &p){
        cout << "Person 복사생성자 호출" << endl;
        //this->name = p.name;//얕은 복사
        //깊은복사
        this->name = new char[strlen(p.name)+1];
        strcpy(this->name,p.name);
        this->age = p.age;
    }
    ~Person(){
        delete[] name;
        cout << "Person 소멸자 호출" << endl;
    }
    void PrintPersonInfo(){
        cout << name << " , " << age << endl;
    }
 
};
int main(void){
    Person p1("홍길동",20);
    Person p2 = p1;

    p1.PrintPersonInfo();
    p2.PrintPersonInfo();

    return 0;
}