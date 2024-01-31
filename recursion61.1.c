#include<stdio.h>
int sum(int n){
	if(n==0){
		return 0;
	}
	else{
		return sum(n-1)+n;	
	}

}
int main(){
	int n ,c;
	printf("enter the number you want the sum:");
	scanf("%d",&n);
	c=sum(n);
	printf("%d",c);
}
