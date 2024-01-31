// using class
#include<iostream>
using namespace std;
class Node{
	public:
		Node *lchild;
		int data;
		Node *rchild;
};

class Queue{
	private:
		int front;
		int rear;
		int size;
		Node **Q;
	public:
		Queue(){                 // by default if not declear
			front=rear=-1;
			size=10;
			Q=new Node*[size];
		}
		Queue(int size){
			front=rear=-1;
			this->size=size;
			Q=new Node*[this->size];
		}
		int isempty(){
			return front==rear;
		}
		void display();
		void enqueue(Node *x);
		Node *dequeue();
};
void Queue::display(){
	for(int i=front+1;i<=rear;i++){
		cout<<Q[i];
	}
	cout<<endl;
}
void Queue::enqueue(Node *x){
	if(rear==size-1){
		cout<<"queue is full";
	}
	else{
		rear++;
		Q[rear]=x;
	}
}
Node *Queue::dequeue(){
	Node *x=NULL;
	if(front==rear){
		cout<<"empty";
	}
	else{
		front++;
		x=Q[front];
	}
	return x;
}

class Tree{
	public:
		Node *root;
		Tree(){
			root=NULL;
		}
		void CreateTree();
		void Preorder(Node *p);
		void Postorder(Node *p);
		void Inorder(Node *p);
};


void Tree::CreateTree(){
	Node *p,*t;
	int x;
	Queue q(100);
	cout<<"enter root value:";
	cin>>x;
	root=new Node;
	root->data=x;
	root->lchild=root->rchild=NULL;
	q.enqueue(root);
	while(!q.isempty()){
		p=q.dequeue();
		cout<<"enter left child of "<<p->data<<" :";
		cin>>x;
		if(x!=-1){
			t=new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			q.enqueue(t);			
		}
		cout<<"enter right child of "<<p->data<<" :";
		cin>>x;
		if(x!=-1){
			t=new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			q.enqueue(t);			
		}
	}
}
void Tree:: Preorder(Node *p){
	if(p){
		cout<<p->data;
		Preorder(p->lchild);
		Preorder(p->rchild);
	}
}
void Tree::Inorder(Node *p){
	if(p){
		Inorder(p->lchild);
		cout<<p->data;
		Inorder(p->rchild);
	}
}

void Tree::Postorder(Node *p){
	if(p){
		Postorder(p->lchild);
		Postorder(p->rchild);
		cout<<p->data;
	}
}

int main(){
	Tree t;
	t.CreateTree();
	t.Preorder(t.root);
}

