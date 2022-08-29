#include <iostream>

int main(void){

    int a, b;
    char str[50];
    double d;

    std::cout << "숫자 두개 입력 : ";
    std::cin >> a >> b;
    std::cout << a << " , " << b << std::endl;

    std::cout << "문자열 입력 : ";
    std::cin >> str;
    std::cout << str << std::endl;

    std::cout << "실수 입력 : ";
    std::cin >> d;
    std::cout << d << std::endl;
    return 0;
}