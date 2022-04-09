#include <iostream>
using namespace std;

class Circle{
    int radius;
    public:
    Circle() {radius=1;}
    Circle(int radius){this->radius = radius;}
    void setRadius(int radius){this->radius=radius;}
    double getArea(){return 3.14*radius*radius;}
};
void readRadius(Circle &c){
    int r;
    cout<<"radius : ";
    cin>>r;
    c.setRadius(r);
}
int main(){
    Circle d;
    readRadius(d);
    cout<<"area : "<<d.getArea()<<endl;
}