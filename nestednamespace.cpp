#include <iostream>
namespace Outer{
    namespace Inner{
        int x = 42;
   }
}
int main() {
    std::cout << "Value of x in nested namespace: " << Outer::Inner::x << std::endl;
    return 0;
}
