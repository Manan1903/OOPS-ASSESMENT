#include<iostream>
using namespace std;

class Base {
public:
    int pub  = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};
class Derived : public Base {
public:
    void accessBaseMembers() {
        cout << "Public: " << pub << endl; 
        cout << "Protected: " << prot << endl;
        // cout << "Private: " << priv << endl; // This line would cause a compilation error
    }
};
int main() {
    Base b;
    cout<<b.pub<<endl; 
    
}