#include <iostream>
#include <cstdlib>
using namespace std;
class Person{
public:
    Person(){
        cout << "Person Constructor" << endl;
    }    
};
int main(void){
    //malloc으로 Person 동적할당
    cout << "malloc으로 동적할당" << endl;
    Person* arr1 = (Person*) malloc(sizeof(Person) * 5);
    cout << "---------------" << endl;

    //new로 Person을 동적할당
    cout << "new로 동적할당" << endl;
    Person* arr2 = new Person[5];
    cout << "---------------" << endl;
    return 0;
}