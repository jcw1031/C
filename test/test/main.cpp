#include <iostream>
#include <cstring>

using namespace std;
int main(){
    cout<<"영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍트의 끝은 ; 입니다. 10000개까지 가능합니다."<<endl;
    char a[10000];
    cin.getline(a, 10000, ';');
    int len=strlen(a);
    int number=0;
    for(int i=0;i<len;i++){
        a[i]=towlower(a[i]);
        if(isalpha(a[i])==1){
            number++;
        }
    }
    cout<<"알파벳 수 : "<<number<<endl;

    for(int i=97;i<123;i++){
        int num=0;
        cout<<(char)i<<" ";
        for(int j=0;j<len;j++){
            if((char)i==a[j]){
                num++;
            }
        }
        cout<<"("<<num<<")"<<"  :    ";
        for(int k=0;k<num;k++){
            cout<<"*";
        }
        cout<<endl;
    }
} 