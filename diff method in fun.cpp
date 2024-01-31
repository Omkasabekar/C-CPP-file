#include<iostream>
using namespace std;
void passbyvalue(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
void passbyreference(int &a,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
void passbyaddress(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main()
{
	int a=5,b=6;
	cout<<"the value of a before swaping:"<<a<<endl;
	cout<<"the value of b before swaping:"<<b<<endl;
	passbyreference(a,b);
	cout<<"the value of a after swaping:"<<a<<endl;
	cout<<"the value of b after swaping:"<<b<<endl;	
}
