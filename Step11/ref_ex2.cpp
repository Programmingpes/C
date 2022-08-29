#include <iostream>
using namespace std;
void Swap1(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
//Swap1을 참조자 버전으로 변경, 함수명 Swap2
void Swap2(int &p1, int &p2){
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
int main(void){
    int a = 10, b = 20;
    Swap1(&a, &b);
    cout << a << " , " << b << endl;
    Swap2(a, b);
    cout << a << " , " << b << endl;
    return 0;
}