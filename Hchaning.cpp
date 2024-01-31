#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
}*head=NULL;

void sortedindex(Node **H, int x){
	Node *t,*q=NULL,*p=*H;
	t=new Node;
	t->data=x;
	t->next=NULL;
	if(*H==NULL){
		*H=t;
	}
	else{
		while(p && p->data<x){
			q=p;
			p=p->next;
		}
		if(p==*H){
			t->next=*H;
			*H=t;
		}
		else{
			t->next=q->next;
			q->next==t;
		}
	}
}

struct Node *search(Node *p,int key){
	while(p!=NULL){
		if(p->data==key){
			return p;
		}
		p=p->next;
	}
	return NULL;
}

int Hash(int key){
	return key%10;
}

void Insert(Node *H[],int key){
	int index=Hash(key);
	sortedindex(&H[index],key);
}

int main(){
	Node *HT[10];
	int i;
	Node *temp;
	for(int i=0;i<10;i++){
		HT[i]=NULL;
	}
	
 	Insert(HT,12);
 	Insert(HT,22);
 	Insert(HT,42);
 
 	temp=search(HT[Hash(21)],21);
 
 	printf("%d ",temp->data);
}
