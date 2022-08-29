#include <iostream>
using namespace std;

int& add(int &n){
    n += 1;
    return n;
}

int main(void){
    int a = 10;
    int &b = add(a);
    int c = add(b);//별도의 변수가 선언이 된것이기 때문에 값을 복사받음

    cout << a << " , " << b << "," << c << endl;
    cout << &a << " , " << &b << "," << &c << endl;

    return 0;
}