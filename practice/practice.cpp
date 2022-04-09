#include <iostream>
#include <string>
using namespace std;

class Circle{
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
    void setRadius(int r);
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

void Circle::setRadius(int r){
    radius=r;
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

    Circle test;
    
    Circle* p;
    p=&test;
    cout<<"asdfasdfsdfdfd"<<(*p).getArea()<<endl;

    Circle circleArray[3];

    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    p=circleArray;
    for(int i=0;i<3;i++){
        cout<<p->getArea()<<endl;
        p++;
    }
    cout<<"asdfasf : "<<p[0].getArea()<<endl;

    Circle array[3]={Circle(10), Circle(20), Circle()};

    Circle circles[5][7];
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            circles[i][j].setRadius(i+j);
        }
    }

    int* q=new int;

    *q=5;
    int n = *q;
    cout<<q<<endl;
    delete q;
    cout<<&n<<endl;

    char* pp=new char[999];
    if(!pp){
        cout<<"메모리 할당 실패"<<endl;
        return 0;
    }
    for(int i=0;i<999;i++) pp[i]=i;
    delete [] pp;

    int* pArraydas = new int [7] {1, 2, 3, 4, 5, 6, 7};
    cout<<pArraydas[2]<<endl;

    string s;

    cout<<"input : "<<endl;
    getline(cin, s, '\n');
    int len = s.length();

    for(int i=0; i<len;i++){
        string first=s.substr(0, 1);
        string sub=s.substr(1, len-1);
        s=sub+first;
        cout<<s<<endl;
    }

    string year="2021";
    int nnn=stoi(year);
    cout<<nnn<<endl;

    string a("I study C++");
    int length=a.length();
    int size=a.size();
    int capacity=a.capacity();

    cout<<length<<" "<<size<<"  "<<capacity<<endl;
}