#include <iostream>
using namespace std;
void PrintNumber(int &n){
    cout << &n << " , " << n << endl;
}
int main(void){
    int num = 10;
    //pointer
    int *ptr = &num;
    cout << &num << " , " << ptr << endl;

    //reference
    int &a = num;
    cout << &a << " , " << &num << endl;
    a++;
    cout << a << " , " << num << " , " << *ptr << endl;

    //------------------------
    PrintNumber(num);
    return 0;
}