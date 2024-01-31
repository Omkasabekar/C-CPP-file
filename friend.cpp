#include<iostream>
using namespace std;
class Distance{
	private:
		int meters;
	public:
		Distance()
		{
			meters=0;
		}
		void display(){
			cout<<"Meters value:"<<meters<<endl;
		}
		//prototype 
		friend void addvalue(Distance &d);
};
void addvalue(Distance &d){
	d.meters=d.meters+5;
}
int main(){
	Distance d1;//meter =0
	d1.display();//0
	// the friend function call
	addvalue(d1);//pass by reference
	
	d1.display();//5
}
