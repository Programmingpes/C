#include <iostream>
namespace A
{
    void PrintMessage(){
        std::cout << "A PrintMessage" << std::endl;
    }
} 
namespace B
{
    void PrintMessage(){
        std::cout << "B PrintMessage" << std::endl;
    }
}
using namespace A;
using namespace std;
int main(void)
{
    A::PrintMessage();
    B::PrintMessage();
    PrintMessage();
    cout << "Hello World" << endl;
    return 0;
}