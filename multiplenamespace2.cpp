#include<iostream>
namespace Lib1{
    void calculate(){
        std::cout << "Calculating in Lib1" << std::endl;
    }
} 
namespace Lib2{
    void calculate(){
        std::cout << "Calculating in Lib2" << std::endl;
    }
} 
int main(){
    Lib1::calculate();
    Lib2::calculate();
    return 0;
}