#include<iostream>
using namespace std;
struct Node{
	int data;
	//int height;
	Node *lchild;
	Node *rchild;
}*root=NULL;

void Inorder(Node *p){
	if(p){
		Inorder(p->lchild);
		cout<<p->data<<" ";
		Inorder(p->rchild);
	}
}

int Nodeheight(Node *p){
	if(p==NULL){
		return 0;
	}
	int x,y=0;
	x=Nodeheight(p->lchild);
	y=Nodeheight(p->rchild);
	if(x>y){
		return x+1;
	}
	return y+1;
}

int balancedfactor(Node *p){
	if(p==NULL){
		return 0;
	}
	int x,y=0;
	x=Nodeheight(p->lchild);
	y=Nodeheight(p->rchild);
	
	return x-y;
}

Node *LLrotation(Node *p){
	Node *pl=p->lchild;
	p->lchild=pl->rchild;
	pl->rchild=p;
	if(root==p){
		root=pl;
	}
	return pl;
}

struct Node* LRrotation(Node *p){
	Node *pl=p->lchild;
	Node *plr=pl->rchild;
	
	pl->rchild=plr->lchild;
	p->lchild=plr->rchild;
	
	plr->lchild=pl;
	plr->rchild=p;
	
	//pl->height=Nodeheight(pl);
	//p->height=Nodeheight(p);
	//plr->height=Nodeheight(plr);
	
	if(root==p){
		root=plr;
	}
	return plr;
}

struct Node* RRrotation(Node *p){
	Node *pr=p->rchild;
	
	p->rchild=pr->lchild;
	pr->lchild=p;
	if(root==p){
		root=pr;
	}
	return pr;
}

struct Node* RLrotation(Node *p){
	Node *pr=p->rchild;
	Node *prl=pr->lchild;
	
	pr->lchild=prl->rchild;
	p->rchild=prl->lchild;
	
	prl->rchild=pr;
	prl->lchild=p;
	
	if(root==p){
		root=prl;
	}
	return prl;
}

// insert

Node *insert(Node *p, int key){
	Node *t;
	if(p==NULL){
		t=new Node;
		t->data=key;
		//t->height=1;
		t->rchild=t->lchild=NULL;
		return t;
	}
	if(key<p->data){
		p->lchild=insert(p->lchild,key);
	}
	else if(key>p->data){
		p->rchild=insert(p->rchild,key);
	}
	
	//p->height=Nodeheight(p);
	
	if(balancedfactor(p)==2 && balancedfactor(p->lchild)==1){
		return LLrotation(p);
	}
	else if(balancedfactor(p)==2 && balancedfactor(p->lchild)==-1){
		return LRrotation(p);
	}
	else if(balancedfactor(p)==-2 && balancedfactor(p->rchild)==-1){
		return RRrotation(p);
	}
	else if(balancedfactor(p)==-2 && balancedfactor(p->rchild)==1){
		return RLrotation(p);
	}
	
	return p;
}

// delete
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
		if(Nodeheight(p->lchild)>Nodeheight(p->rchild)){
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
	
	if(balancedfactor(p)==2 && balancedfactor(p->lchild)==1){
		return LLrotation(p);
	}
	else if(balancedfactor(p)==2 && balancedfactor(p->lchild)==-1){
		return LRrotation(p);
	}
	else if(balancedfactor(p)==2 && balancedfactor(p->lchild)==0){
		return LLrotation(p);
	}
	else if(balancedfactor(p)==-2 && balancedfactor(p->rchild)==-1){
		return RRrotation(p);
	}
	else if(balancedfactor(p)==-2 && balancedfactor(p->rchild)==1){
		return RLrotation(p);
	}
	else if(balancedfactor(p)==-2 && balancedfactor(p->rchild)==0){
		return RRrotation(p);
	}
	
	return p;
}


int main(){
	
	int A[] = {10, 20, 30, 25, 28, 27, 5};
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        root =insert(root, A[i]);
    }
 
    Inorder(root);
    cout << endl;
 
    Delete(root, 28);
   
    Inorder(root);
    cout << endl;
}
