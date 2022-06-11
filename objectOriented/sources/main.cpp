#include <iostream>
using namespace std;

class A{
    public:
    void func(){
        f();
    }
    virtual void f(){
        cout<<"A"<<endl;
    }
};

class B : public A{
    public:
    void f(){
        cout<<"B"<<endl;
    }
};

class C : public B{
    public:
    void f(){
        cout<<"C"<<endl;
    }
};

int main(){
    C c;
    c.f();
    A* pa;
    B* pb;
    pa=pb=&c;
    pb->f();
    pa->f();
    pa->func();
}