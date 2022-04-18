#include <iostream>
#include <string>

using namespace std;
class Square {
int width, height, depth;
public:
Square();
Square(int w);
Square(int w, int h);
Square(int w, int h, int d);

void setWidth(int w);
void setHeight(int h);
void setDepth(int d);
int getWidth();
int getHeight();
int getDepth();

int getArea();

~Square();
};

Square::Square(){
cout << "매개변수 없는 생성자 실행" << endl;
width = 1; height = 1; depth = 1;
}
Square::Square(int w){
cout << "매개변수 하나 있는 생성자 실행" << endl;
width = w; height = 1; depth = 1;
}
Square::Square(int w, int h) {
cout << "매개변수 둘 있는 생성자 실행" << endl;
width = w; height = h; depth = 1;
}
Square::Square(int w, int h, int d) {
cout << "매개변수 셋 있는 생성자 실행" << endl;
width = w; height = h; depth = d;
}

void Square::setWidth(int w) {
width = w;
}
void Square::setHeight(int h) {
height = h;
}
void Square::setDepth(int d) {
depth = d;
}
int Square::getWidth() {
return width;
}
int Square::getHeight() {
return height;
}
int Square::getDepth() {
return depth;
}

int Square::getArea() {
return width * height * depth;
}

Square::~Square() {
cout << width << "X" << height << "X" << depth << " 클래스 종료" << endl;
}

int main()
{
Square* p;

Square* arr = new Square[4]{ Square(), Square(5), Square(5, 40), Square(5, 40, 30) };
Square arrr[4];

cout<<sizeof(arr)<<endl<<endl;
cout<<sizeof(arrr)<<endl<<endl;
for (int i = 0; i < sizeof(arr)/2; i++) {
cout << "부피 = " << arr[i].getArea() << endl;
}
for (int i = 0; i < sizeof(arr)/2; i++) {
cout << "매개변수가 " << i << "개인 값 출력 : " << arr[i].getWidth() << ", " << arr[i].getHeight() << ", " << arr[i].getDepth() << endl;
}

int w, h, d;
p = &arr[3];
cout << endl << "매개변수가 3개인 값을 바꿔보기" << endl << "너비, 높이, 깊이 : ";
cin >> w >> h >> d;
p->setWidth(w);
p->setHeight(h);
p->setDepth(d);

cout << "부피 = " << p->getArea() << endl;

delete[] arr;
}