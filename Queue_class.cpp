// using class
#include<iostream>
using namespace std;
class Queue{
	private:
		int front;
		int rear;
		int size;
		int *Q;
	public:
		Queue(){                 // by default if not declear
			front=rear=-1;
			size=10;
			Q=new int[size];
		}
		Queue(int size){
			front=rear=-1;
			this->size=size;
			Q=new int[this->size];
		}
		void display();
		void enqueue(int x);
		int dequeue();
};
void Queue::display(){
	for(int i=front+1;i<=rear;i++){
		cout<<Q[i];
	}
	cout<<endl;
}
void Queue::enqueue(int x){
	if(rear==size-1){
		cout<<"queue is full";
	}
	else{
		rear++;
		Q[rear]=x;
	}
}
int Queue::dequeue(){
	int x=-1;
	if(front==rear){
		cout<<"empty";
	}
	else{
		front++;
		x=Q[front];
	}
	return x;
}

int main(){
	Queue q(5);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.display();
	cout<<q.dequeue();
}

