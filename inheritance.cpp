#include<iostream>
#define private public
using namespace std;
class base{
	private:
		int a,b;
	public:
		void Display(){
			cout<<"enter two variable"<<endl;cin>>a>>b;
			
		}
		void show(){
			cout<<"a="<<a<<"b="<<b;
		}
	
};
class drieve: public base{
	private:
		int m,n;
	public:
		void get(){
			cout<<"enter two variable"<<endl;cin>>n>>m;
			
		}
		void set(){
			cout<<"m="<<m<<"n="<<n;
		}
};
int main()
{
	base b1;
	b1.Display();
	b1.show();
	drieve d1;
	d1.get();
	d1.set();
	
}
