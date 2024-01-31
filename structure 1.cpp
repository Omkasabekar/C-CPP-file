#include<iostream>
using namespace std;
struct Rectangle{
	int length;
	int breadth;
};
int main(){
	Rectangle r1;
	cout<<"enter the value for length and breadth:"<<endl;
	cin>>r1.length>>r1.breadth;
	cout<<"the length is:"<<r1.length<<endl<<"the breadth is:"<<r1.breadth;
}
