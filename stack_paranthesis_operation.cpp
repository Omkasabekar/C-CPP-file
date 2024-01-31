#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
}*top;

void push(int x){
	Node *p=new Node;
	if(p==NULL){
		cout<<"stack overflow";
	}
	else{
		p->data=x;
		p->next=top;
		top=p;
	}	
}
int pop(){
	Node *p;
	int x=-1;
	if(top==NULL){
		cout<<"it is underflow";
	}
	else{
		p=top;
		x=p->data;
		top=top->next;
		delete(p);
	}
	return x;
}
int stacktop(){
	if(top){
		return top->data;
	}
	return -1;
}
int isoperant(char x){
	if(x=='+' || x=='-' || x=='*' || x=='/'){
		return 0;
	}
	else{
		return 1;
	}
}

int Eval(char * postfix){
	int i,x1,x2,r;
	for(int i=0;postfix[i]!='\0';i++){
		if(isoperant(postfix[i])){
			push(postfix[i]-'0');
		}
		else{
			x2=pop();
			x1=pop();
			switch(postfix[i]){
				case '+':
					r=x1+x2;
					break;
					
				case '-':
					r=x1-x2;
					break;
				case '*':
					r=x1*x2;
					break;
				case '/':
					r=x1/x2;
					break;
			}
			push(r);
		}
	}
	return stacktop();
}

int main(){
	char * postfix="234*+82/-";
	cout<<"the result is:"<<Eval(postfix);
}
