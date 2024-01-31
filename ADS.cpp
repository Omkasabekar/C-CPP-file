#include<iostream>
#include<strings.h>
#include<math.h>
using namespace std;
struct Node{
	char data;
	Node *next;
}*top;

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

int pre(char x){
	if(x=='+' || x=='-'){
		return 2;
	}
	else if(x=='*' || x=='/'){
		return 3;
	}
	else if(x=='^'){
		return 4;
	}
	else if(x==')'){
		return 1;
	}
	return 0;
}

int isoperant(char x){
	if(x=='+' || x=='-' || x=='*' || x=='/'|| x=='^'||x==')'){
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
				case '^':
					r=pow(x1,x2);
					break;
			}
			push(r);
		}
	}
	return stacktop();
}

int main(){
	char infix[]="(2^2+3*4-8/2)";
		
	char *postfix=convert(infix);
	cout<<postfix;
	cout<<endl;
	cout<<"the result is:"<<Eval(postfix);
}




