#include <iostream>
#include <cstdlib> //C언어 헤더파일은 맨 앞에 c를 붙이고, 맨뒤에 .h를 제거
using namespace std;
int main(void){
    //C언어 방식으로 동적할당
    int *arr1 = (int *)malloc(sizeof(int) * 5);
    for(int i=0;i<5;i++) arr1[i] = i+1;
    for(int i=0;i<5;i++) cout << arr1[i] << " ";
    cout << endl;
    free(arr1);
    //C++ 방식으로 동적할당
    int *arr2 = new int[5];
    for(int i=0;i<5;i++) arr2[i] = i+1;
    for(int i=0;i<5;i++) cout << arr2[i] << " ";
    cout << endl;
    delete[] arr2;
    return 0;
}