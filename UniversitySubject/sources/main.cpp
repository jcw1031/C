#include <iostream>
using namespace std;

class Base{
    int a;
protected:
    int b;
public:
    int c;

    void set(int a){
        this->a=a;
    }
    int get(){
        return a;
    }
    void paint(){
        draw();
    }
    virtual void draw(){
        cout<<"Base::draw()"<<endl;
    }
    virtual ~Base(){
        cout<<"~Base()"<<endl;
    }
};

class Derived1 : public Base{
public:
    void test(int a){
        this->b=a;
        this->c=a;
    }

    int getA(){
        return get();
    }

    virtual void draw(){
        cout<<"Derived::draw()"<<endl;
    }

    ~Derived1(){
        cout<<"~Derived()"<<endl;
    }
};

int main(){
    /*Derived d;
    Derived* pDer = &d;
    Base* pBase = pDer; //업 캐스팅

    pBase->set(10);
    cout<< pBase->get()<<endl;
    cout<<pDer->getA()<<endl;*/

    Base *pBase = new Derived1();
    pBase->paint();
    delete pBase;
}