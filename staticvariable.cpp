#include<iostream>
using namespace std;
class demo{
    public:
    static int counter;
    demo(){
        counter++;
    }
};

int demo::counter = 0;
int main(){
    demo a,b,c;
    cout<<"Total Objects created: " << demo::counter << endl;
    return 0;
}