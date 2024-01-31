#include<iostream>
using namespace std;
int main()
{
	int num,dem,result;
	cout<<"Enter two number for num and dem:"<<endl;cin>>num>>dem;
	try
	{
		if(dem==0)
		{
			throw dem;
		}
	
	result=num/dem;
	}
	catch(int ex)
	{
		cout<<"exception:Divide zero is not allowed-"<<ex<<endl;
	}
	cout<<result;
}
