#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
    public:
    virtual void test(){
        cout<<"Power"<<endl;
    }
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

    Power operator ++(){
        kick++;
        punch++;
        return *this;
    }
    Power operator ++(int x){
        Power tmp=*this;
        kick++;
        punch++;
        return tmp;
    }

    int getKick(){
        return this->kick;
    }
};

class Pp : public Power{
    public:
    void test(){
        cout<<"Pp"<<endl;
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
    cout<<aa<<endl;
    Power aaa = ++a;
    Power aaaa = a++;
    cout<<aaa.getKick()<<endl;
    cout<<aaaa.getKick()<<endl;
    cout<<a.getKick()<<endl;


    Power* p;
    Pp pp;
    p=&pp;
    Power* p2 = new Pp();

    p->test();
    p2->test();
}