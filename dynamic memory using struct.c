#include<stdio.h>
#include<stdlib.h>

struct Rectangle{
	int length;
	int breadth;
};
int main()
{
	struct Rectangle *r;
	r=(struct Rectangle *)malloc(sizeof(struct Rectangle));
	r->length=20;
	r->breadth=10;
	printf("the area is %d",r->length*r->breadth);

}
