#include<iostream>
using namespace std;
int main()
{
	int *A[3];
	A[0]=new int[3];
	A[1]=new int[3];
	A[2]=new int [3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		cout<<"enter the value of element:";
		cin>>A[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		cout<<"enter the value of element:"<<A[i][j];
		
		}
	}
}

