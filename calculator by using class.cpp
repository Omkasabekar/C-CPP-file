#include<iostream>
using namespace std;
class Student{
	public:
		
	int add()
	{
		int a,b;
		cout<<"Enter value for a:";
		cin>>a;
		cout<<"enter value for b:";
		cin>>b;
		int c;
		c=a+b;
		cout<<"the addition is "<<c<<endl;
		cout<<"the substraction is "<<a-b<<endl;
		cout<<"the multiplicaton is "<<a*b<<endl;
		cout<<"the division is "<<a/b<<endl;
	}
};
int main()
{
	Student s1;
	s1.add();
	
}
