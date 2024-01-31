#include<iostream>
//#include<stdlib.h>
//#include<stdio.h>
using namespace std;

struct Node{
	Node *lchild;
	int data;
	Node *rchild;
}*root=NULL;

struct Queue{
	int size;
	int front;
	int rear;
	Node **Q;    // one is for Node and another is for dynamic.
};

void create(Queue *q,int size){
	q->size=size;
	q->front=q->rear=0;
	q->Q=new Node*[q->size]; //(Node **)malloc(q->size*sizeof(Node*)); //
}

void enqueue(Queue *q,Node *x){
	if((q->rear+1)%q->size==q->front){
		cout<<"queue is full";
	}
	else{
		q->rear=q->rear+1;
		q->Q[q->rear]=x;
	}
}

Node * dequeue(Queue *q){
	Node * x=NULL;
	if(q->rear==q->front){
		cout<<"queue is empty";
	}
	else{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];
	}
	return x;
}

int isempty(Queue q){
	return q.front==q.rear;
}

// binary code
void Treecreate(){
	struct Node *p,*t;
	int x;
	struct Queue q;
	create(&q,100);
	cout<<"enter root value:";
	cin>>x;
	root=new Node;
	root->data=x;
	root->lchild=root->rchild=NULL;
	enqueue(&q,root);
	while(!isempty(q)){
		p=dequeue(&q);
		cout<<"enter left child of "<<p->data<<" :";
		cin>>x;
		if(x!=-1){
			t=new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;				 //here we are making left of root node point on t
			enqueue(&q,t);			
		}
		cout<<"enter right child of "<<p->data<<" :";
		cin>>x;
		if(x!=-1){
			t=new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;				//here we are making right of root node point on t
			enqueue(&q,t);			
		}
	}
}

// recursive function to print
/*
void preorder(Node *p){
	if(p){
		cout<<p->data;
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
void inorder(Node *p){
	if(p){
		preorder(p->lchild);
		cout<<p->data;
		preorder(p->rchild);
	}
}

void postorder(Node *p){
	if(p){
		preorder(p->lchild);
		preorder(p->rchild);
		cout<<p->data;
	}
}

int main(){
	Treecreate();
	preorder(root);
}
*/

//iterative function
//by using stack
struct stack{
	int size;
	int top;
	Node **s;
};

void createstack(struct stack *st,int size){
	st->size=size;
	st->top=-1;
	st->s=new Node*[st->size];
}

void push(struct stack *st,Node *x){
	if(st->top==st->size-1){
		cout<<"stack overflow";
	}
	else{
		st->top++;
		st->s[st->top]=x;
	}
}
Node *pop(struct stack *st){
	Node *x=NULL;
	if(st->top==-1){
		cout<<"stack underflow";
	}
	else{
		x=st->s[st->top];
		st->top--;
	}
	return x;
}
int isEmpty(struct stack st){
	if(st.top==-1){
		return 1;
	}
	return 0;
}

void preorder(Node *p){
	struct stack st;
	createstack(&st,100);
	while(p!=NULL || !isEmpty(st)){
		if(p!=NULL){
			cout<<p->data;
			push(&st,p);
			p=p->lchild;
		}
		else{
			p=pop(&st);
			p=p->rchild;
		}
	}
}

void inorder(Node *p){
	struct stack st;
	createstack(&st,100);
	while(p!=NULL || !isEmpty(st)){
		if(p!=NULL){
			push(&st,p);
			p=p->lchild;
		}
		else{
			p=pop(&st);
			cout<<p->data;
			p=p->rchild;
		}
	}
}

void levelorder(Node *p){
	Queue q;
	create(&q,100);
	cout<<p->data<<" ";
	enqueue(&q,p);
	while(!isempty(q)){
		p=dequeue(&q);
		if(p->lchild){
			cout<<p->lchild->data<<" ";
			enqueue(&q,p->lchild);
		}
		if(p->rchild){
			cout<<p->rchild->data<<" ";
			enqueue(&q,p->rchild);
		}
	}
}

//number of nodes
int numnodes(Node *p){
	if(p==NULL){
		return 0;
	}
	int x=numnodes(p->lchild);
	int y=numnodes(p->rchild);
	return x+y+1;
}


// sum of nodes
int sumnodes(Node *p){
	if(p==NULL){
		return 0;
	}
	int x=sumnodes(p->lchild);
	int y=sumnodes(p->rchild);
	return x+y+p->data;
}


// to count nodes which having 2 nodes.
int count(Node *p){
	int x,y=0;
	if(p!=NULL){
		x=count(p->lchild);
		y=count(p->rchild);
		if(p->lchild && p->rchild){
			return x+y+1;
		}
		else{
			return x+y;
		}
	}
	return 0;
}

int leafnode(Node *p){
	int x,y=0;
	if(p!=NULL){
		x=leafnode(p->lchild);
		y=leafnode(p->rchild);
		if(p->lchild==NULL && p->rchild==NULL){
			return x+y+1;
		}
		else{
			return x+y;
		}
	}
	return 0;
}

int height(Node*p){
	int x,y=0;
	if(p==0){
		return 0;
	}
	x=height(p->lchild);
	y=height(p->rchild);
	if(x>y){
		return x+1;
	}
	else{
		return y+1;
	}
}

// to get sum of all right Nodes
bool isLeafNodeofBT(Node *node){
   if (node == NULL)
      return false;
   if (node->lchild == NULL && node->rchild == NULL)
      return true;
   return false;
}

int rsum(Node *root){
   int sum = 0;
   if (root != NULL){
      if (isLeafNodeofBT(root->rchild))
         sum += root->rchild->data;
      else
         sum += rsum(root->rchild);
         sum += rsum(root->lchild);
   }
   return sum;
}


int main(){
	Treecreate();
	levelorder(root);
	cout<<endl;
	cout<<"number of nodes:"<<leafnode(root)<<endl;
	cout<<"height is:"<<height(root);
}
