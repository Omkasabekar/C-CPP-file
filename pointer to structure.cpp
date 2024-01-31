#include<iostream>
#include<string>
using namespace std;
struct person{
	string name;
	int age;
	double salary;
};
int main()
{
	person p1;
	person *ptr=& p1;
	cout<<"enter name,age,salary"<<endl;
	cout<<"enter name:";
	cin>>ptr->name;
	cout<<"age:";
	cin>>ptr->age;
	cout<<"salary:";
	cin>>ptr->salary;
	
	//person *ptr=&p1;
	cout<<"name:"<<ptr->name<<endl;
	cout<<"age:"<<ptr->age<<endl;
	cout<<"salary:"<<ptr->salary<<endl;
}
