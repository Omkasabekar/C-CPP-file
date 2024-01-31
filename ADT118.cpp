#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Array{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
    cout<<arr.A[i]<<" ";
    }
}
void Insert(Array *arr,int index,int x){
    for(int i=arr->length;i>index;i--){
        arr->A[i]=arr->A[i-1];
    }
        arr->A[index]=x;
        arr->length++;
    
}
void Delete(Array *arr,int index){
    int x=0;
    x=arr->A[index];
    for(int i=index;i<arr->length;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
    cout<<x;
}
int main(){
    struct Array arr;
     int x,index,ch;
    cout<<"enter the  size:";cin>>arr.size;
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.A=new int[arr.size];
    do{
    cout<<"1.insert"<<endl<<"2.delete"<<endl<<"3.search";
    cout<<"enter the ch";
    cin>>ch;
    
    switch (ch){
        case 1:
                cout<<"enter the index and x";
                cin>>index>>x;
                Insert(&arr,index,x);
                break;
        case 2:
            cout<<"enter the index";
            cin>>index;
            Delete(&arr,index);
            break;
        case 3:
            Display(arr);
            break;
                
            }
    }while(ch<=3);
}
