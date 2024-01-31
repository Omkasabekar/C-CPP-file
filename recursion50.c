#include<stdio.h>
void fun(int x){
	if(x>=1){
		printf("%d\n",x);
		fun(x-1);
	}
}
int main()
{
	int x;
	printf("enter the value for x:");
	scanf("%d",&x);
	fun(x);
}
