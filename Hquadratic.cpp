#include<iostream>
using namespace std;
# define size 10

int hash(int key){
	return key%size;
}

int probe(int H[],int key){
	int index=hash(key);
	int i=0;
	while(H[(index+i)%size]!=0){
		i++;
	}
	return (index+i)%size;
}

void insert(int H[],int key){
	int index=hash(key);
	if(H[index]!=0){
		index=probe(H,key);
	}
	H[index]=key;
}

int search(int H[],int key){
	int index=hash(key);
	int i=0;
	while(H[(index+i)%size]!=key){
		if(H[(index+i)%size]==0){
			return 0;
		}
		i++;
	}
	return (index+i)%size;
}

int main(){
	int HT[]={0};
	insert(HT,4);
	insert(HT,14);
	insert(HT,25);
	insert(HT,6);
	insert(HT,7);
	cout<<"value found at index:"<<search(HT,24);
}
