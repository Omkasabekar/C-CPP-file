#include<stdio.h>
int fun(n){
	static int a=0;
	if(n>0){
		a++;
		return fun(n-1)+a;
	}
}
int main(){
	
	int x=5;
	printf("%d",fun(x));
}
