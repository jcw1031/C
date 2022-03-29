#include <iostream>
using namespace std;

class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle::Circle() : Circle(1){}

Circle::Circle(int r){
    radius=r;
    cout<<"radius : "<<radius<<endl;
}

Circle::~Circle(){cout<<radius<<"원 소멸"<<endl;}

double Circle::getArea(){
    return 3.141592*radius*radius;
}

class Point{
    int x, y;
public:
    Point();
    Point(int a, int b);
    void show(){cout<<x<<", "<<y<<endl;}
};

Point::Point() : Point(0, 0){}
Point::Point(int a, int b) : x(a), y(b){}

class Rectangle{
    int width, height;
    public:
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(int d);
    bool isSquare(){if (width==height){return true;} else return false;}
};
Rectangle::Rectangle():Rectangle(1){}
Rectangle::Rectangle(int d){
    width=d;
    height=d;
}
Rectangle::Rectangle(int w, int h){
    width=w;
    height=h;
}

Circle globalDonut(1000);
Circle globalPizza(3000);

void f(){
    Circle fDonut(100);
    Circle fPizza(300);
}
int main(){
    Circle donut;
    double area=donut.getArea();
    cout<<"면적은 "<<area<<endl;

    Circle pizza(30);
    area=pizza.getArea();
    cout<<"pizza 면적은 "<<area<<endl;
    f();

    Point origin;
    Point target(10, 20);
    origin.show();
    target.show();

    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout<<"rect1은 정사각형"<<endl;
    if(rect2.isSquare()) cout<<"rect2는 정사각형"<<endl;
    if(rect3.isSquare()) cout<<"rect3는 정사각형"<<endl;
}