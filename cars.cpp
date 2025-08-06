#include<iostream>
using namespace std;
class car{
    public:
    static int totalcars;
    car(){
        totalcars++;
    }
};
int car::totalcars=0;
int main(){
    car c1,c2;
    cout<<car::totalcars<<endl;
}