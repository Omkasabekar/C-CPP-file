#include<iostream>
using namespace std;
void add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int modulo(int a,int b);
int main()
{
	int a,b;
	cout<<"enter two number:";
	cin>>a>>b;
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	modulo(a,b);
}
void add(int a,int b)
{
	int c;
	c=a+b;
	cout<<"addition is:"<<c<<endl;
}
sub(int a,int b)
{
	cout<<"substraction is:"<<a-b<<endl;
}
mul(int a,int b)
{
	cout<<"multiplication is:"<<a*b<<endl;
}
div(int a,int b)
{
	cout<<"div is:"<<a/b<<endl;
}
modulo(int a,int b)
{
	cout<<"modulo is:"<<a%b<<endl;
}
