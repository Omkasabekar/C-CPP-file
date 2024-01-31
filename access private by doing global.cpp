#include<iostream>
#define private public
using namespace std;
class Add{
	private:
		int a;
	private:
		void display(){
			a=10;
			int b;
		cout<<"enter the second value:"<<endl;cin>>b;
		cout<<"the addtion is:"<<a+b;
			
		}
		
};
int main()
{
	Add a1;
	a1.display();
}
