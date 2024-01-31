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
	person p[3];
	cout<<"enter person details:"<<endl;
	
	for(int i=0;i<3;i++)
	{
		cout<<i+1<<" person details"<<endl;
		cout<<"enetr the name of "<<i+1<<" person:"<<endl;
		cin>>p[i].name;
		cout<<"enetr the age of "<<i+1<<" person:"<<endl;
		cin>>p[i].age;
		cout<<"enetr the salary of "<<i+1<<" person:"<<endl;
		cin>>p[i].salary;
	}
	cout<<endl<<"Details of a person"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Personal details of "<<i+1<<" person"<<endl;
		cout<<"person name is:"<<p[i].name<<endl;
		cout<<"person age is:"<<p[i].age<<endl;
		cout<<"person salary is:"<<p[i].salary<<endl;
		cout<<endl<<endl;
	}
}
