#include<iostream>
using namespace std;
#define size 10
#define prime 7

int hash(int key){
	return key%size;
}

int primehash(int key){
	return prime-(key%size);
}

int Doublehash(int H[],int key){
	int index=hash(key);
	int i=0;
	while(H[(index+(i*primehash(key)))%size]!=0){
		i++;
	}
	return (index+ i*primehash(key))%size;
}

int insert(int H[],int key){
	int index=hash(key);
	if(H[index]!=0){
		index=Doublehash(H,key);
	}
	H[index]=key;
}

int search(int H[], int key){
    int idx = hash(key);
    int i = 0;
    while (H[(idx + i * primehash(idx)) % size] != key){
        i++;
        if (H[(idx + i * primehash(key)) % size] == 0){
            return -1;
        }
    }
    return (hash(idx) + i * primehash(idx)) % size;
}

int main(){
	int HT[]={0};
	insert(HT,5);
	insert(HT,25);
	insert(HT,15);
	insert(HT,35);
	insert(HT,95);
	cout<<"value found at index:"<<search(HT,95);
}
