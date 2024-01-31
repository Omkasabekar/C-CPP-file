#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,*q;
	int i;
	p=(int*)malloc(5*sizeof(int));
	q=(int*)malloc(6*sizeof(int));
	for(i=0;i<5;i++){
		printf("enter the %d value:",i+1);
		scanf("%d",&p[i]);
	}
	for(i=0;i<5;i++){
		q[i]=p[i];
	}
	free(p);
	p=q;
	q=NULL;
	p[5]=10;
	for(i=0;i<6;i++){
		printf("%d\n",p[i]);
	}
}
