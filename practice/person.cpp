#include <iostream>
#include <string>

using namespace std;

class Person{
	string name;
	string tel;
	public:
	Person();
	string getName(){return name;}
	string getTel(){return tel;}
	void set(string name, string tel);
};

Person::Person(){
}
void Person::set(string name, string tel){
	this->name=name;
	this->tel=tel;
}

int main(){
	Person p[3];
	string name, tel, search;
	int n;
	cin>>n;
	Person person[n];
	
	cout<<"input name&phone number"<<endl;
	for(int i=0;i<3;i++){
		cout<<"person "<<i+1<<" : ";
		cin>>name>>tel;
		p[i].set(name, tel);
	}
	cout<<"all person's name : "<<p[0].getName()<<p[1].getName()<<p[2].getName()<<endl;
	cout<<"searching phone number. input name : ";
	cin>>search;
	
	cout<<"phone number is ";
	for(int i=0;i<3;i++){
		if(!(search.compare(p[i].getTel()))) {cout<<p[i].getTel(); break;}
		else continue;
	}

	cout<<endl;
	
}