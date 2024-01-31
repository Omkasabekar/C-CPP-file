#include<iostream>
using namespace std;
struct Queue{
	int size;
	int front;
	int rear;
	int *Q;
};

void display(Queue q){
	int i=q.front+1;
	do{
		cout<<q.Q[i];
		i=(i+1)%q.size;
	}while(i!=(q.rear+1)%q.size);
	cout<<endl;
}

void enqueue(Queue *q,int x){
	if((q->rear+1)%q->size==q->front){
		cout<<"queue is full";
	}
	else{
		q->rear=(q->rear+1)%q->size;
		q->Q[q->rear]=x;
	}
}

int dequeue(Queue *q){
	int x=-1;
	if(q->rear==q->front){
		cout<<"it is empty";
	}
	else{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];
	}
	return x;
}
int main(){
	Queue q;
	cout<<"enter the size of queue:";
	cin>>q.size;
	q.Q=new int[q.size];
	q.front=q.rear=0;
	enqueue(&q,1);
	enqueue(&q,2);
	enqueue(&q,3);
	enqueue(&q,4);
	enqueue(&q,5);
	display(q);
	cout<<endl;
	cout<<"1:"<<dequeue(&q)<<endl;
	cout<<"2:"<<dequeue(&q)<<endl;
	enqueue(&q,5);
	enqueue(&q,6);
	cout<<endl;
	display(q);
}
