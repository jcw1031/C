#ifndef EXP_H
#define EXP_H
#include <iostream>
using namespace std;
class Exp{
    int base, exp;
    public:
    Exp();
    Exp(int base);
    Exp(int base, int exp);
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp b);
};
#endif