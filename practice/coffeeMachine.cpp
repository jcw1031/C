#include <iostream>
#include <string>

using namespace std;

int main(){
	string str, sub;
	int index, sum=0, pos;
	cout<<"input : ";
	cin>>str;

	while(true){
		index=str.find('+');
		if(index==-1){
			sum+=stoi(str);
			cout<<str<<endl;
			break;
		}
		sub=str.substr(0, index);
		cout<<sub<<endl;
		str=str.substr(index+1, str.length()-(index+1));
		sum+=stoi(sub);
	}
	cout<<sum<<endl;

	cout<<"input string (end is &)"<<endl;
	getline(cin, str, '&');
	cin.ignore();
	cout<<"search : ";
	string search;
	getline(cin, search, '\n');
	cout<<"change : ";
	string change;
	getline(cin, change, '\n');

	while(true){
		index = str.find(search);
		if(index==-1){
			break;
		}
		str.replace(index, search.length(), change);
		index=index+change.length();
	}
	cout<<str<<endl;
	int a[5];
	cout<<sizeof(a)/4<<endl;
}