#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
}*head;
void create(int arr[],int n){
	Node *temp,*last;
	head=new Node;
	head->data=arr[0];
	head->next=NULL;
	last=head;
	for(int i=1;i<5;i++){
		temp=new Node;
		temp->data=arr[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}
// by using loops:
/*
void display(Node *p){
	cout<<"elements of nodes:"<<endl;
	while(p!=0){
		cout<<p->data<<endl;
		p=p->next;
	}
}
int count(Node *p){
	int count=0;
	while(p){
		count++;
		p=p->next;
	}
	return count;
}
int sum(Node *p){
	int sum=0;
	while(p){
		sum=sum+p->data;
		p=p->next;
	}
	return sum;
}

int max(Node *p){
	int m=10;
	while(p){
		if(m>p->data){
			m=p->data;
		}
		p=p->next;
	}
	return m;
}

struct Node * search(Node *p,int key){
	while(p){
		if(key==p->data){
			return p;
		}
		p=p->next;
	}
	return NULL;
}

// insert in linklist
void insert(int x,int index){
	Node *t=new Node;
	t->data=x;
	int pos=index-1;
	if(index==1){
		t->next=head;
		head=t;
		return;
	}
	Node *p=head;
		t->data=x;
		for(int i=1;i<index-1;i++){
			p=p->next;
		}
		t->next=p->next;
		p->next=t;
}

// inserting element at last
void insert(int x){
	Node *t=new Node;
	Node *last;
	t->data=x;
	t->next=NULL;
	if(head==NULL){
		head=last=t;
	}
	else{
		last->next=t;
		last=t;
	}
}
int main(){
	insert(4);
	insert(3);
	insert(5);
	insert(6);
	insert(7);
	display(head);	
}

int main(){
	int arr[]={3,9,8};
	create(arr,3);
	insert(4,1);
	insert(5,2);
	display(head);	
}

//insert in sorted link list
void sortedinsert(int x){
	Node *p,*q;
	p=new Node;
	q=new Node;
	p=head;
	q=NULL;
	Node *t=new Node;
	t->data=x;
	if(head==NULL){
		head=t;
	}
	else{
		while(p!=0 && p->data<x){
			q=p;
			p=p->next;
		}
		if(p==head){
			t->next=head;
			head=t;
		}
		else{
			t->next=q->next;
			q->next=t;
		}
		
	}
}
int main(){
	int arr[]={10,20,30,40,50};
	create(arr,5);
	sortedinsert(4);
	sortedinsert(51);
	display(head);	
}

//to delete Node
int remove(Node *p,int index){
	Node *q=NULL;
	int x;
	if(index==0){
		x=head->data;
		head=head->next;
		return x;
	}
	else{
		for(int i=0;i<index-1;i++){
			q=p;
			p=p->next;
		}
		q->next=p->next;
		x=p->data;
		delete p;
		return x;
	}
}

//to concate 2linklist
void concate(Node *p,Node *q){
	while(p->next){
		p=p->next;
	}
	p->next=q;
}
int main(){
	struct Node *temp;
	int arr1[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,10};
	create1(arr1,5);
	create2(arr2,5);
	concate(head,second);
	display(head);	
}

//to check it is sorted or not
int find(Node *p){
	Node *q=NULL;
	while(p->next!=NULL){
		q=p;
		p=p->next;
		if(q->data>p->data){
			return 0;
		}
	}
	return 1;
}

//to remove duplicate element
void duplicate(Node *p){
	Node *q=NULL;
	while(p->next!=NULL){
		q=p;
		p=p->next;
		if(q->data==p->data){
			q->next=p->next;
		}
	}
}

// to reverse a linklist
1.By using array
void reverse(Node *p){
	int *A;
	A=new int[5];
	int i=0;
	while(p!=NULL){
		A[i]=p->data;
		i++;
		p=p->next;
	}
	i--;
	p=head;
	while(p!=NULL){
		p->data=A[i];
		p=p->next;
		i--;
	}
}


2.by using sliding pointer
void reverse(Node *p){
	Node *q=NULL;
	Node *r=NULL;
	while(p){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
}

3. by using recursive
void reverse(Node *q,Node *p){
	if(p!=NULL){
		reverse(p,p->next);
		p->next=q;
	}
	else{
		head=q;
	}
}

int main(){
	int arr[]={10,20,30,40,50};
	create(arr,5);
	reverse(NULL,head);
	display(head);	
}

//to merge two sorted linklist
void merge(Node *p,Node *q){
	Node *last;
	if(p->data<q->data){
		third=last=p;
		p=p->next;
		//last->next=NULL;
	}
	else{
		third=last=q;
		q=q->next;
		//last->next=NULL;
	}
	while(p && q){
		if(p->data<q->data){
			last->next=p;
			last=p;
			p=p->next;
		}
		else{
			last->next=q;
			last=q;
			q=q->next;
		}
	}
	if(p){
		last->next=p;
	}
	else{
		last->next=q;
	}
}


// to check loop is present
int loop(Node *p){
	Node *q=head;
	do{
		p=p->next;
		q=q->next;
		if(q){
			q=q->next;
		}
	}while(p && q && p!=q);
	if(p==q){
		return 1;
	}
	return 0;
}
int main(){
	struct Node *temp;
	int arr1[]={1,4,5,6,9};
	create1(arr1,5);
	Node *t1,*t2;
	temp=head;
	t1=head->next->next;
	while(temp->next!=0){
		t2=temp->next;
		temp=temp->next;
	}
	t2->next=t1;
	cout<<loop(head);
}

//to sort linklist
void sort(Node *i){
	i=head;
	int temp;
	Node *j=NULL;
	for(i=head;i!=NULL;i=i->next){
		for(j=i->next;j!=NULL;j=j->next){
			if(i->data>j->data){
				temp=i->data;
				i->data=j->data;
				j->data=temp;	
			}
		}
	}
}

//to find middle of linklist
void middle(Node *p){
	third=head;
	while(p && p->next!=NULL){
		third=third->next;
		p=p->next->next;
	}
}

*/

// by using recursive:
void display(Node *p){
	if(p!=0){
		cout<<p->data<<endl;
		display(p->next);
	}
}
int count(Node *p){
	if(p){
		return count(p->next)+1;
	}
}
int sum(Node *p){
	if(p){
		return sum(p->next)+p->data;
	}
}
struct Node * search(Node *p,int key){
	
	if(key==p->data){
		return p;
	}
	return search(p->next,key);
}
int main(){
	struct Node *temp;
	int arr[]={1,3,9,5,8};
	create(arr,5);
	display(head);
}


