#include<iostream>
using namespace std;
struct person{
	char name[100];
	int age;
	double salary;
};
int main()
{
	person p1;
	cout<<"enter personal details"<<endl<<"Name"<<endl;
	cin.getline(p1.name,100);
	cout<<"enter age:"<<endl;
	cin>>p1.age;
	cout<<"enter salary:"<<endl;
	cin>>p1.salary;
	
	cout<<endl<<"personal details as follows:"<<endl;
	cout<<"person name:"<<p1.name<<endl;
	cout<<"person age:"<<p1.age<<endl;
	cout<<"person salary:"<<p1.salary;
}
