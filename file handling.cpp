#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char arr[100];
	cout<<"enter your name and age:";
	cin.getline(arr,100);
	ofstream myfile("personal info.txt",ios::out|ios::app);
	myfile<<arr;
	myfile.close();
	cout<<"file operation performed successfully"<<endl;
	
	cout<<"reading a content from file:";
	ifstream obj("personal info.txt");
	obj.getline(arr,100);
	cout<<"array content:"<<arr<<endl;
	obj.close();
	cout<<"reading performed successfully"<<endl;
}
