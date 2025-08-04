#include<iostream>
namespace Hello{
    void greet(){
        std::cout<<"Hi\n";
    }
}

int main(){
    Hello::greet();
    return 0;
}