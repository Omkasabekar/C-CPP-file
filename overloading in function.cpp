#include<iostream>
using namespace std;
int add(int a,int b)
{
	cout<<"1 fun"<<endl;
	return(a+b);
}
double add(double a, double b)
{
	cout<<"2 fun"<<endl;
	return(a+b);
}
double add(double a, int b)
{
	cout<<"3 fun"<<endl;
	return(a+b);
}
double add(int a, double b)
{
	cout<<"4 fun"<<endl;
	return(a+b);
}
int main()
{
	cout<<add(4,5)<<endl;
	cout<<add(4.2,5.5)<<endl;
	cout<<add(6.4,2)<<endl;
	cout<<add(8,9)<<endl;
}
