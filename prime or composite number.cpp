#include<iostream>
using namespace std;
int main()
{
	int num,n=0;
	cout<<"enter a number:"; cin>>num;
	for(int i=1;i<=num;i++)
	{
		if (num%i==0)
		{
			n++;
		}
	
	}
	if(n==2)
	{
		cout<<"prime number";
	}
	else
	cout<<"composite number";
}
