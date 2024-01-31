#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *lchild;
	Node *rchild;
}*root=NULL;

void inorder(Node *p){
	if(p){
		inorder(p->lchild);
		cout<<p->data<<" ";
		inorder(p->rchild);
	}
}

Node* insert(Node *p,int key){
	Node *t;
	if(p==NULL){
		t=new Node;
		t->data=key;
		t->lchild=t->rchild=NULL;
		return t;
	}
	if(key<p->data){
		p->lchild=insert(p->lchild,key);
	}
	else if(key>p->data){
		p->rchild=insert(p->rchild,key);
	}
	return p;      // for same value
}

int search(Node *p, int key){
	if(p==NULL){
		return 0;
	}
	if(key<p->data){
		return search(p->lchild,key);
	}
	else if(key>p->data){
		return search(p->rchild,key);
	}
	else{
		return p->data;
	}
}

int height(Node *p){
	if(p==NULL){
		return 0;
	}
	int x,y=0;
	x=height(p->lchild);
	y=height(p->rchild);
	if(x>y){
		return x+1;
	}
	return y+1;
}

Node *InPre(Node *p){
	while(p && p->rchild){
		p=p->rchild;
	}
	return p;
}

Node *InSucc(Node *p){
	while(p && p->lchild){
		p=p->lchild;
	}
	return p;
}

struct Node* Delete(Node *p,int key){
	Node *q;
	if(p==NULL){
		return NULL;
	}
	if(p->lchild==NULL && p->rchild==NULL){
		if(p==root){
			root=NULL;
		}
		delete(p);
		return NULL;
	}
	
	if(key<p->data){
		p->lchild=Delete(p->lchild,key);
	}
	else if(key>p->data){
		p->rchild=Delete(p->rchild,key);
	}
	else{
		if(height(p->lchild)>height(p->rchild)){
			q=InPre(p->lchild);
			p->data=q->data;
			p->lchild=Delete(p->lchild,q->data);
		}
		else{
			q=InSucc(p->rchild);
			p->data=q->data;
			p->rchild=Delete(p->rchild,q->data);
		}
	}
	return p;
}


int main(){
	int temp;
	/*
	int arr[]={10,30,2,5,15,20};
	for(int i=0;i<6;i++){
		root=insert(root,arr[i]);
	}
	*/
	root=insert(root,10);
	insert(root,5);
	insert(root,20);
	insert(root,8);
	insert(root,30);
	Delete(root,10);
	inorder(root);
	cout<<endl;
	temp=search(root,20);
	if(temp!=0){
		cout<<"element is found:"<<temp;
	}
	else{
		cout<<"not present";
	}
}

