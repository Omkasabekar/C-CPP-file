#include<iostream>
#define private public
using namespace std;
class base{
	protected:
		int a,b;
	public:
		void Display(){
			cout<<"enter two variable"<<endl;cin>>a>>b;
			
		}
		void show(){
			
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
		
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
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
			cout<<"m="<<m<<endl<<"n="<<n<<endl;
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
