#include<iostream>
using namespace std;

struct Node{
	Node *lchild;
	int data;
	Node *rchild;
}*root=NULL;


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

Node * stackstop(stack *st){
	if(st->top){
		return st->s[st->top];
	}
}

void createFromPreorder(int *pre, int n) {
 	stack st;
    // Create root node
    int i = 0;
    root = new Node;
    root->data = pre[i++];
    root->lchild = NULL;
    root->rchild =NULL;
 
    // Iterative steps
    Node* t;
    Node* p = root;
	createstack(&st,100);
	while(i<n){
		if(pre[i]<p->data){
			t=new Node;
			t->data=pre[i++];
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			push(&st,p);
			p=t;
		}
		else{
			if(pre[i]>p->data && pre[i]<stackstop(&st)){
				t=new Node;
				t->data=pre[i++];
				t->lchild=t->rchild=NULL;
				p->rchild=t;
				p=t;
			}
			else{
				p=pop(&st);
			}
		}
	}	
}

int main(){
	
	int pre[] = {30, 20, 10, 15, 25, 40, 50, 45};
    int n = sizeof(pre)/sizeof(pre[0]);
 	createFromPreorder(pre, n);
}




