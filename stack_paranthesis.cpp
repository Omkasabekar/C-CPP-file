#include<iostream>
#include<strings.h>
using namespace std;
struct Node{
	char data;
	Node *next;
}*top;
void display(Node *p){
	while(p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
}
void push(char x){
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
char pop(){
	char x=-1;
	if(top==NULL){
		cout<<"stack underflow";
	}
	else{
		x=top->data;
		top=top->next;
	}
	return x;
}

int stacktop(){
	if(top){
		return top->data;
	}
	return -1;
}
/*

int isbalanced(char exp[]){
	int i;
	for(i=0;exp[i]!='\0';i++){
		if(exp[i]=='('){
			push(exp[i]);
		}
		else if(exp[i]==')'){
			if(top==NULL){
				return 0;
			}
			else{
				pop();
			}
		}
	}
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	char exp[]="((a+b)*(c-d))";
	cout<<isbalanced(exp);
}
*/

int pre(char x){
	if(x=='+' || x=='-'){
		return 1;
	}
	else if(x=='*' || x=='/'){
		return 2;
	}
	return 0;
}

int isoperant(char x){
	if(x=='+' || x=='-' || x=='*' || x=='/'){
		return 0;
	}
	else{
		return 1;
	}
}

char * convert(char * infix){
	int i=0,j=0;
	int len=strlen(infix);
	char * postfix= new char[len-1];
	while(infix[i]!='\0'){
		if(isoperant(infix[i])){
			postfix[j++]=infix[i++];
		}
		else{
			if(pre(infix[i])>pre(stacktop())){
				push(infix[i++]);
			}
			else{
				postfix[j++]=pop();
			}
		}
	}
	while(top){
		postfix[j++]=pop();
	}
	postfix[j]='\0';
	return postfix;
}

int main(){
	char *infix="a+b*c-d/e";
	//push('#');
	/*char *postfix=convert(infix);
	cout<<postfix;*/
	
	cout<<convert(infix);
}




