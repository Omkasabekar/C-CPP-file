
#include<stdio.h>
using namespace std;
int main()
{
    int *p;
    p=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        printf("enter the %d number:",i+1);
        scanf("%d",&p[i]);
    }
    for(int i=0;i<5;i++){
        printf("the value is %d\n",p[i]);
    }
}
