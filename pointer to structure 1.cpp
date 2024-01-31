#include<iostream>
using namespace std;
struct Rectangle{
	int length;
	int breadth;
};
int main()
{
	Rectangle r1;
	Rectangle *p=&r1;
	r1.length=20;
	r1.breadth=10;
	p->breadth=30;
	cout<<r1.breadth;
	
}
