#include<iostream>
using namespace std;
int main()
{
	int arr[3][3];
	int arr1[3][3];
	int add[3][3];
	int sub[3][3];
	cout<<"enter the 9 element of first matrix:"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<"enter the "<<i+1<<" and "<<j+1<<" element:";
			cin>>arr[i][j];
		}
	}
	cout<<"enter the 9 element of second matrix:"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<"enter the "<<i+1<<" and "<<j+1<<" element:";
			cin>>arr1[i][j];
		}
	}
	cout<<"first matrix is:"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		//cout<<endl;
	}
	cout<<"second matrix is:"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"the addition of two matrix:"<<endl;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		
		add[i][j]=arr[i][j]+arr1[i][j];
		cout<<add[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"the substraction of two matrix is:"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			sub[i][j]=arr[i][j]-arr1[i][j];
			cout<<sub[i][j]<<" ";
		}
		cout<<endl;
	}
}
	
