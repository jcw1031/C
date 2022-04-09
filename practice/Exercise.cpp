#include <iostream>
using namespace std;

char &find(char s[], int index){
    return s[index];
}

void f(int a){a=-a;}
void g(int* a){*a=-*a;}
void h(int &a){a=-a;}

int main(){
    char name[]="Nike";
    cout<<name<<endl;

    find(name, 0)='S';
    cout<<name<<endl;

    char &ref = find(name, 2);
    ref='t';
    cout<<name<<endl;

    int n=5;
    f(n);
    cout<<n<<endl;
    g(&n);
    cout<<n<<endl;
    h(n);
    cout<<n<<endl;
}