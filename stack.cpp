#include<iostream>
using namespace std;
struct stack{
	int size;
	int top;
	int *s;
};

void display(struct stack st){
	for(int i=st.top;i>=0;i--){
		cout<<st.s[i]<<" "<<endl;
	}
}

void push(struct stack *st,int x){
	if(st->top==st->size-1){
		cout<<"stack overflow";
	}
	else{
		st->top++;
		st->s[st->top]=x;
	}
}

int pop(struct stack *st){
	int x=-1;
	if(st->top==-1){
		cout<<"stack underflow";
	}
	else{
		x=st->s[st->top];
		st->top--;
	}
	return x;
}

int peek(struct stack *st,int index){
	int x=-1;
	if(st->top-index+1<0){
		cout<<"invalid index";
	}
	else{
		x=st->s[st->top-index+1];
	}
	return x;
}

int top(stack st){
	if(st.top==-1){
		return -1;
	}
	else{
		return st.s[st.top];
	}
}

int empty(struct stack st){
	if(st.top==-1){
		return 1;
	}
	return 0;
}

int full(struct stack st){
	return st.top==st.size-1;
}

int main(){
	stack st;
	cout<<"enter the size of stack:";
	cin>>st.size;
	st.s=new int[st.size];
	st.top=-1;
	push(&st,1);
	push(&st,2);
	push(&st,3);
	push(&st,4);
	push(&st,5);
	pop(&st);
	cout<<"element is:"<<peek(&st,2)<<endl;
	cout<<"top element is"<<top(st)<<endl;
	display(st);
	cout<<full(st);
}
