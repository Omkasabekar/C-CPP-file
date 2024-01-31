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

void insert(int key){
	Node *t=root;
	Node *r=NULL;
	Node *p;
	if(root==NULL){
		p=new Node;
		p->data=key;
		p->lchild=p->rchild=NULL;
		root=p;
		return;
	}
	while(t!=NULL){
		r=t;
		if(key<t->data){
			t=t->lchild;
		}
		else if(key>t->data){
			t=t->rchild;
		}
		else{
			return;
		}
	}
	p=new Node;
	p->data=key;
	p->lchild=p->rchild=NULL;
	if(key<r->data){
		r->lchild=p;
	}
	else{
		r->rchild=p;
	}
}



Node * search(int key){
	Node *p=root;
	while(p!=NULL){
		if(key==p->data){
			return p;
		}
		else if(key<p->data){
			p=p->lchild;
		}
		else{
			p=p->rchild;
		}
	}
	return NULL;
}

int main(){
		
	int arr[]={10,30,2,5,15,20};
	for(int i=0;i<6;i++){
		root=insert(root,arr[i])
	}
	
	Node *temp;
	insert(10);
	insert(5);
	insert(20);
	insert(8);
	insert(30);
	inorder(root);
	cout<<endl;
	temp=search(20);
	if(temp!=0){
		cout<<"element is found:"<<temp->data;
	}
	else{
		cout<<"not present";
	}
}

