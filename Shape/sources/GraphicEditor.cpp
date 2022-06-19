#include <iostream>
using namespace std;

class Base{
    public:
    int a;
    void f(){
        cout<<"base"<<endl;
    }
};

class Derived : public Base{
    public:
    int b;
    void f(){
        cout<<"Derived"<<endl;
    }
};

int main(){
    Base *p;
    p=new Derived();

    
}