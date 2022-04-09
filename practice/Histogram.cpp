#include <iostream>
#include <string>

using namespace std;

class Histogram{
	string str;
    int amount=0;
	public:
	Histogram();
	Histogram(string str);
	void put(string str);
	void putc(char c);
	void print();
};

Histogram::Histogram(string str){
	this->str=str;
}

void Histogram::put(string str){
	(this->str).append(str);
}

void Histogram::putc(char c){
	str+=c;
}

void Histogram::print(){
    cout<<str<<endl<<endl<<"총 알파벳 수 : ";
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])) {
            amount++;
            str[i]=tolower(str[i]);
        }
    }
    cout<<amount<<endl<<endl;

    for(int i=97;i<123;i++){
        int count = 0;
        for(int j=0;j<str.length();j++){
            if((char)i==str[j]){
                count++;
            }
        }
        cout<<(char)i<<" ("<<count<<")"<<"  :";
        for(int j=0;j<count;j++) cout<<'*';
        cout<<endl;
    }
}

int main(){
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}