#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
}*top;
void display(Node *p){
	while(p){
		cout<<p->data<<"->";
		p=p->next;
	}
}
void push(int x){
	Node *p=new Node;
	if(p==NULL){
		cout<<"stack overflow";
	}
	else{
		p->data=x;
		p->next=top;
		top=p;
	}	
}
int pop(){
	Node *p;
	int x=-1;
	if(top==NULL){
		cout<<"it is underflow";
	}
	else{
		p=top;
		x=p->data;
		top=top->next;
		delete(p);
	}
	return x;
}
int peak(int pos){
	Node *p=top;
	for(int i=0;i<pos-1;i++){
		p=p->next;
	}
	if(p!=NULL){
		return p->data;
	}
	else{
		return -1;
	}
}
int stacktop(){
	if(top){
		return top->data;
	}
	return -1;
}
int Empty(){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
int full(){
	Node *t=new Node;
	if(t==NULL){
		return 1;
	}
	return 0;
}
int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	cout<<pop()<<endl;
	cout<<peak(3)<<endl;
	cout<<stacktop()<<endl;
	cout<<Empty()<<endl;
	cout<<full()<<endl;
	cout<<endl;
	
	display(top);
}
