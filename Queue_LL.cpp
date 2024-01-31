#include<iostream>
using namespace std;
struct Queue{
	int data;
	Queue *next;
}*front=NULL,*rear=NULL;

void display(){
	Queue *p=front;
	while(p){
		cout<<p->data;
		p=p->next;
	}
	cout<<endl;
}

void enqueue(int x){
	Queue *t=new Queue;
	if(t==NULL){
		cout<<"Queue is full";
	}
	else{
		t->data=x;
		t->next=NULL;
		if(front==NULL){
			front=rear=t;
		}
		else{
			rear->next=t;
			rear=t;
		}
	}
}

int dequeue(){
	int x=-1;
	if(front==NULL){
		cout<<"queue is empty";
	}
	else{
		x=front->data;
		front=front->next;	
	}
	return x;
}

int isempty(){
	return front==NULL;
}

int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	display();
	cout<<dequeue()<<endl;
	display();
}
