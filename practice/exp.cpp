#include <iostream>
using namespace std;
#include "exp.h";
Exp::Exp():Exp(1, 1){}
Exp::Exp(int base):Exp(base, 1){}
Exp::Exp(int base, int exp){
    this->base=base;
    this->exp=exp;
}
int Exp::getValue(){
    int value=1;
    for(int i=0;i<exp;i++){
        value*=base;
    }
    return value;
}
int Exp::getBase(){
    return base;
}
int Exp::getExp(){
    return exp;
}
bool Exp::equals(Exp b){
    if(tish==b) return true;
    else return false;
}
