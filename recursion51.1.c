#include<stdio.h>
int fun(n){
	if(n>0){
		return fun(n-1)+n;
	}
}
int main(){
	int x=5;
	printf("%d",fun(x));
}
