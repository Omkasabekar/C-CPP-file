#include<iostream>
using namespace std;
int add(int a,int b);
int main()
{
	int a,b;
	cout<<"enter two number:";
	cin>>a>>b;
	add(a,b);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	cout<<"addition is:"<<c;
}
