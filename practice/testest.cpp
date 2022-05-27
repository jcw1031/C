#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
    public:
    Power(int kick=0, int punch=0){
        this->kick=kick;
        this->punch=punch;
    }

    Power operator + (Power op2){
        Power tmp;
        tmp.kick=this->kick+op2.kick;
        tmp.punch=this->punch+op2.punch;
        return tmp;
    }

    Power& operator += (Power op2){
        this->kick+=op2.kick;
        this->punch+=op2.punch;
        return *this;
    }

    bool operator ==(Power op2){
        if(kick==op2.kick && punch==op2.punch) return true;
        else return false;
    }

    Power operator ++(int x){
        Power tmp = *this;
        kick++;
        punch++;
        return tmp;
    }
    int getKick(){
        return this->kick;
    }
};

int main(){
    Power a(3, 5), b(4, 6), c;
    c=a+b;
    cout<<c.getKick()<<endl;
    a+=b;
    cout<<a.getKick()<<endl;
    (a+=b)+=b;
    cout<<a.getKick()<<endl;
    bool aa=a==a;
    cout<<aa;
    a++;
}