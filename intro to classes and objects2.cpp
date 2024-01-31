#include<iostream>
#include<string>
using namespace std;
class cars{
	string company_name;
	string model_name;
	string fuel_name;
	float mileage;
	double price;
	
	public:
		
		cars(string cname,string mname,string fname,float m,double p){
			company_name=cname;
			 model_name=mname;
			 fuel_name=fname;
			 mileage=m;
			 price=p;
		}
		
		void setdata(string cname,string mname,string fname,float m,double p)
		{
			company_name=cname;
			 model_name=mname;
			 fuel_name=fname;
			 mileage=m;
			 price=p;
				
		}
		void displaydata()
		{
			cout<<"car properties"<<endl;
			cout<<"car company name-"<<company_name<<endl;
			cout<<"car model name-"<<model_name<<endl;
			cout<<"car fule name-"<<fuel_name<<endl;
			cout<<"car milage name-"<<mileage<<endl;
			cout<<"car price name-"<<price<<endl;	
		}
};
int main()
{
	cars car1("maruti","swift","petrol",17,700000);
	//car1.setdata("maruti","swift","petrol",17,700000);
	car1.displaydata();
	//car2.displaydata();
}
