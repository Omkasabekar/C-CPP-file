#include<iostream>
using namespace std;
int main(){
	int a=10;
	int &r=a;
	++r;
	cout<<a;
}
