#include<iostream>

using namespace std;
int main()
{
	int *p;
	p=new int[5];
	for(int i=0;i<5;i++){
		cout<<"enter the "<<i+1<<" element:"<<endl;
		cin>>p[i];
	}
	for(int i=0;i<5;i++){
		cout<<"the value is:"<<p[i];
	}
	delete[]p;
}
