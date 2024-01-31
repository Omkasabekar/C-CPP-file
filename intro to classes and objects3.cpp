#include<iostream>
using namespace std;
class cars{
	string company_name;
	string model_name;
	string fuel_name;
	float mileage;
	double price;
	public:
		void Setdata(string company_name,string model_name,string fuel_name ,float  mileage,double price ){
			cout<<"car properties"<<endl;
			cout<<"car company name-"<<company_name<<endl;
			cout<<"car model name-"<<model_name<<endl;
			cout<<"car fule name-"<<fuel_name<<endl;
			cout<<"car milage name-"<<mileage<<endl;
			cout<<"car price name-"<<price<<endl<<endl;
		}
	
	
};
int main(){
	cars car1,car2,car3;
	car1.Setdata("maruti","swift","diseal",17.5,700000);
	car2.Setdata("honda","I10","CNG",19,900000);
	
}
