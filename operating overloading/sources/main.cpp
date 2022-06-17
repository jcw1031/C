#include <iostream>
using namespace std;

class B{

public:
    int a;
    int b;

    B(int a=0, int b=0){
        this->a=a;
        this->b=b;
    }

    void f(){
        cout<<"f()"<<endl;
    }

    bool operator ==(B ob){
        if(this->a==ob.a && this->b==ob.b){
            return true;
        }
        else return false;
    }

    B operator +(int a){
        B tmp;
        tmp.a=this->a+a;
        tmp.b=this->b+a;
        return tmp;
    }

    B operator +(B ob){
        B tmp;
        tmp.a=this->a+ob.a;
        tmp.b=this->b+ob.b;
        return tmp;
    }

    B& operator +=(int a){
        this->a+=a;
    this->b+=b;
    return *this;
    }

    B& operator ++(){
        this->a++;
        this->b++;
        return *this;
    }

    B operator ++(int x){
        B tmp=*this;
        a++;
        b++;
        return tmp;
    }
};

int main(){
    B a, b, c(10, 10);

    a=++c;
    cout<<a.a<<" "<<a.b<<endl;
}