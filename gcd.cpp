#include<iostream>
using namespace std;
/*
1. method
int main(){
	// to find gcd of 2 number i.e highest comman factor
	int n1,n2;
	cout<<"enter the two values:"<<endl;
	cin>>n1>>n2;
	int c=0;
	if(n1>n2){
		c=n2;
	}
	else{
		c=n1;
	}
	for(int i=c;i>=1;i--){
		if(n1%i==0 && n2%i==0){
			cout<<"highest comman factor:"<<i;
			break;
		}
	}
}
*/

//2. method by equalien formula
int main(){
	int n1,n2;
	cout<<"enter the two valus:"<<endl;
	cin>>n1>>n2;
	while(n1!=0 && n2!=0){
		if(n1>n2){
			n1=n1%n2;
		}
		else{
			n2=n2%n1;
		}
	}
	if(n1==0){
		cout<<n2<<endl;
	}
	else{
		cout<<n1<<endl;
	}
}


