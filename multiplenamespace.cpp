#include<iostream>
namespace A{
    int val(){
        return 2;
    }
}
namespace B {
    int val(){
        return 5;
    }
}

// int main(){
//     std::cout<<A::val()+B::val();

//     return 0;
// }
using namespace A;
using namespace B;
int main(){
    std::cout << "Sum of values from namespaces A and B: " << A::val() + B::val() << std::endl;
    std::cout << "Value from namespace A: " << A::val() << std::endl;
    std::cout << "Value from namespace B: " << B::val() << std::endl;
    return 0;
}