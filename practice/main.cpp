#include <iostream>
#include <string>
using namespace std;

class Calendar {
    int year;
    public:
    Calendar();
    int getYear();
};

Calendar::Calendar(){
    year=10;
}

int Calendar::getYear(){
    return year;
}

int main(){
    Calendar oct;
    cout<<oct.getYear();
}