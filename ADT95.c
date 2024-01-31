#include<stdio.h>
#include<stdlib.h>

struct Array{
	int *A;
	int size;
	int length;
};
void Display(struct Array arr){
	int i=0;
	for(i=0;i<arr.length;i++){
		printf("%d",arr.A[i]);
	}
}
int main(){
	struct Array arr;
	printf("enter the size of an array:");
	scanf("%d",&arr.size);
	printf("enter the length:");
	arr.A=(int*)malloc(arr.size*sizeof(int));
	scanf("%d",&arr.length);
	printf("Enter all element\n");
	int i;
	for(i=0;i<arr.length;i++){
		scanf("%d",&arr.A[i]);
	}
	Display(arr);
}
