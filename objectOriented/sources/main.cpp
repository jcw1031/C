#include <iostream>
#include <string>
using namespace std;

class ArrayUtility2{
    public:
    static int* concat(int s1[], int s2[], int size);
    static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size){
    int* s=new int[size];
    for(int i=0;i<size;i++){
        if(i<size/2){
            s[i]=s1[i];
        }
        else{
            s[i]=s2[i%5];
        }
    }
    return s;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize){
    int count=0;
    for(int i=0;i<size/2;i++){
        for(int j=0;j<size/2;j++){
            if(s1[i]==s2[j]){
                s1[i]=NULL;
                count++;
            }
        }
    }
    retSize=count;
    cout<<"1번 count : "<<count<<endl;
    int* s=new int[count]{NULL};
    count=0;
    for(int i=0;i<size/2;i++){
        if(s1[i]!=NULL){
            s[count++]=s1[i];
        }
    }
    return s;
}

int main(){
    int x[5], y[5];
    cout<<"정수 5개 입력. 배열 x에 삽입 >> ";
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    cout<<"정수 5개 입력. 배열 y에 삽입 >> ";
    for(int i=0;i<5;i++){
        cin>>y[i];
    }

    int* s = ArrayUtility2::concat(x, y, 10);
    cout<<"합친 배열 출력"<<endl;
    for(int i=0;i<10;i++){
        cout<<s[i]<<' ';
    }
    delete[] s;

    cout<<endl<<endl;

    int rSize;
    cout<<"배열 x에서 y를 뺀 결과";
    int* reS=ArrayUtility2::remove(x, y, 10, rSize);
    cout<<"개수는 "<<rSize<<endl;
    for(int i=0;i<rSize;i++){
        cout<<reS[i]<<' ';
    }
    delete[] reS;
}