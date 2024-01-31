#include<iostream>
using namespace std;
struct student{
	char name[40];
	int age;
	int std;
};
int main(){
	student s1;
	cout<<"enter student details:"<<endl;
	cout<<"enter the name:";
	cin.getline(s1.name,40);
	cout<<"enter the age:";
	cin>>s1.age;
	cout<<"enter the std:";
	cin>>s1.std;
	cout<<"student details are as follows:"<<endl;
	cout<<"name:"<<s1.name<<endl;
	cout<<"age:"<<s1.age<<endl;
	cout<<"std:"<<s1.std<<endl;
}
