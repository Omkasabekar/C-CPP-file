// using struct

#include<iostream>
using namespace std;
struct Queue{
	int size;
	int front;
	int Rear;
	int *Q;
};

void display(Queue q){
	for(int i=q.front+1;i<=q.Rear;i++){
		cout<<q.Q[i]<<endl;
	}
}

void enqueue(Queue *q,int x){
	if(q->Rear==q->size-1){
		cout<<"queue is full";
	}
	else{
		q->Rear++;
		q->Q[q->Rear]=x;
	}
}

int dequeue(Queue *q){
	int x=-1;
	if(q->front==q->Rear){
		cout<<"queue is empty";
	}
	else{
		q->front++;
		x=q->Q[q->front];
	}
	return x;
}

int main(){
	Queue q;
	cout<<"enter the size of queue:";
	cin>>q.size;
	q.Q=new int[q.size];
	q.front=q.Rear=-1;
	enqueue(&q,1);
	enqueue(&q,2);
	enqueue(&q,3);
	enqueue(&q,4);
	display(q);
	cout<<dequeue(&q)<<endl;
	display(q);
}



