#include<iostream>
using namespace std;
struct Node{
	int data;
	Node * next;
} * head;
void create(int arr[],int n){
	Node *temp,*last;
	last=new Node;
	head=new Node;
	head->data=arr[0];
	head->next=head;
	last=head;
	for(int i=1;i<n;i++){
		temp=new Node;
		temp->data=arr[i];
		temp->next=last->next;
		last->next=temp;
		last=temp;
	}
}
void display(Node *p){
	do{
		cout<<p->data<<"->";
		p=p->next;
	}while(p!=head);
	cout<<endl;
}
void insert(Node *p,int index,int x){
	Node *t;
	int i;
	t=new Node;
	t->data=x;
	if(index==0){
		if(head==NULL){
			head=t;
			head->next=head;
		}
		else{
			while(p->next!=head){    //as it is circular link list it should move to last and then point 
				p=p->next;			//on t that all . dont get confused;
			}
			p->next=t;
			t->next=head;
			head=t;
		}
	}
	else{
		for(int i=0;i<index-1;i++){
			p=p->next;
		}
		t->next=p->next;
		p->next=t;
	}
}

//delete 

int remove(Node *p,int index){
	Node *q;
	int i,x;
	if(index==1){
		while(p->next!=head){
			p=p->next;
		}
		x=head->data;
		if(head==p){
			delete head;
			head=NULL;
		}
		else{
			p->next=head->next;
			delete head;
			head=p->next;
		}
	}
	else{
		for(int i=0;i<index-2;i++){
			
			p=p->next;
		}
		q=p->next;
		p->next=q->next;
		x=q->data;
		delete(q);
	}
	return x;
	cout<<endl;
}

int main(){
	int arr[]={1,2,3,4,5};
	create(arr,5);
	insert(head,0,7);
	display(head);
}
