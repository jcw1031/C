#include <iostream>
using namespace std;
class Circle{
    int a;
public:
    Circle();
    Circle(int a);
};
Circle::Circle(){
    return;
}

int main(){
    int a, b;
    a=3;
    b=5;
    cout<<(a<b?b:a)<<endl;
}