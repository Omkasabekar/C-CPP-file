#include<iostream>
using namespace std;
int main()
{
	int a[3],b[3],add[3],sub[3],mul[3];
	cout<<"enter 3 element of a:"<<endl;
	for (int i=0;i<3;i++)
	{
		cout<<"enter the "<<i+1<<" element:";
		cin>>a[i];
	}
	cout<<"enter 3 element of b:"<<endl;
	for (int i=0;i<3;i++)
	{
		cout<<"enter the "<<i+1<<" element:";
		cin>>b[i];
	}
	cout<<"the sum of a and b is:"<<endl;
	for (int i=0;i<3;i++)
	{
		add[i]=a[i]+b[i];
		cout<<add[i]<<" ";
	}
	cout<<endl;
	cout<<"the sub of a and b is:"<<endl;
	for (int i=0;i<3;i++)
	{
		sub[i]=a[i]-b[i];
		cout<<sub[i]<<" ";
	}
	cout<<endl;
	cout<<"the mul of a and b is:"<<endl;
	for (int i=0;i<3;i++)
	{
		mul[i]=a[i]*b[i];
		cout<<mul[i]<<" ";
	}
	cout<<endl;
	
}
