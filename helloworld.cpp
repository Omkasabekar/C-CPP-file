#include<iostream>
using namespace std;
int main(){
	int arr[]={9,5,1,4,3,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(arr[j-1]>arr[j]){
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
		
	}
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		cout<<arr[i]<<" ";
	}
}
