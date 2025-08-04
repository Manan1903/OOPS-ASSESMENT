#include<iostream>
namespace Physics{
    double gravity(){
        return 9.8;
    }
}
int main(){
    std::cout<<"Gravity="<<Physics::gravity()<<std::endl;
    return 0;
}