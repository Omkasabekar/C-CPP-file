#include<iostream>
using namespace std;
int main()
{
	char var='a';
	char *pt; 
	pt=&var;
	cout<<"the value of variable is:"<<var<<endl;
	cout<<"the addareh of variable is:"<<pt<<endl;
	cout<<"the value of pointer is :"<<*pt<<endl;
	cout<<endl;
	*pt='e';
	cout<<"the value of variable is:"<<var<<endl;
	cout<<"the addareh of variable is:"<<pt<<endl;
	cout<<"the value of pointer is :"<<*pt<<endl;
}
