#include<iostream>
using namespace std;
struct Node{
	Node *pre;
	int data;
	Node *next;
}*head;
void create(int arr[],int n){
	Node *last,*t;
	head=new Node;
	head->data=arr[0];
	head->next=NULL;
	head->pre=NULL;
	last=head;
	for(int i=1;i<n;i++){
		t=new Node;
		t->data=arr[i];
		t->pre=last;
		t->next=last->next;
		last->next=t;
		last=t;
	}
}
void display(Node *p){
	while(p){
		cout<<p->data<<"->";
		p=p->next;
	}
	cout<<endl;
}
int len(Node *p){
	int count=0;
	while(p!=0){
		count++;
		p=p->next;
	}
	return count;
}
// insert in linklist
/*
void insert(Node *p,int index,int x){
	if(index<0 || index>len(head)){
		return ;
	}
	Node *t=new Node;
	t->data=x;
	if(index==0){
		t->next=head;
		t->pre=NULL;
		head->pre=t;
		head=t;
	}
	else{
		for(int i=0;i<index-1;i++){
			p=p->next;
		}
		t->next=p->next;
		t->pre=p;
		if(p->next){
			p->next->pre=t;
		}
		p->next=t;
	}
}*/
// to delete node
/*
int remove(Node *p,int pos){
	int x=0;
	if(pos==1){
		x=p->data;
		delete p;
		head=head->next;
		if(head){
			head->pre=NULL;
		}
	}
	else{
		for(int i=0;i<pos-1;i++){
			p=p->next;
		}	
		x=p->data;
		p->pre->next=p->next;
		if(p->next){
			p->next->pre=p->pre;
		}
		
	}
	return x;
}*/
// 1.
void reverse(Node *p){
	Node *temp;
	while(p!=NULL){
		temp=p->next;
		p->next=p->pre;
		p->pre=temp;
		p=p->pre;	
		if(p!=0 ){
			head=p;
		}
	}
}

// 2
void reverse(Node *p){
	while(p->next){
		p=p->next;
	}
	while(p!=NULL){
		cout<<p->data<<"->";
		p=p->pre;
	}
	cout<<endl;
}

//3  can use recursive fn same as single

int main(){
	int arr[]={1,2,3,4,5};
	int n=5;
	create(arr,n);
	reverse(head);
	display(head);
	
}
