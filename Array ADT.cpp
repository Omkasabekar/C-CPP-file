#include<iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
    cout<<arr.A[i]<<" ";
    }
}
void Append(struct Array *arr,int x){
    arr->A[arr->length++]=x;
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
int Linera(Array arr,int key){
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]==key)
            return i;
    }
        return -1;
}
int Binary(Array arr,int key){
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(arr.A[mid]==key)
            return mid;
        else if(arr.A[mid]<key)
            l=mid+1;
        else
            h=mid-1;
    }
    return -1;
}
void Get(Array arr,int index){
    cout<<arr.A[index];
}
void set(Array arr,int x,int index){
    arr.A[index]=x;
}
int Max(Array arr){
    int max=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
        }
    }
    return max;
}
int Min(Array arr){
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(min>arr.A[i]){
            min=arr.A[i];
        }
    }
    return min;
}
int Sum(Array arr){
    int sum=0;
    for(int i=0;i<arr.length;i++){
        sum=sum+arr.A[i];
    }
    return sum;
}
void Avg(Array arr){
    float avg=Sum(arr);
    cout<<"the avg is:"<<avg/arr.length;
}
void Reverse(Array *arr){
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}
void Insert2(Array *arr,int x){
    int i=arr->length-1;
    while(arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
} 
void separte(Array *arr){
    int i=0;
    int j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0){
            i++;
        }
        while(arr->A[j]>0){
            j--;
        }
        if(i<j){
            int temp=arr->A[i];
            arr->A[i]=arr->A[j];
            arr->A[j]=temp;
        }
    }
}
int main(){
    struct Array arr={{1,-2,3,-8,9},10,5};
    
    separte(&arr);
    Display(arr);     
}




// union program
#include<iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
    cout<<arr.A[i]<<" ";
    }
}
struct Array *Merge(Array *arr1,Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=new Array;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else if(arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    
        arr3->length=k;
        arr3->size=10;
        return arr3;
    
}
int main(){
    struct Array arr1={{1,2,3,4,6},10,5};
    struct Array arr2={{4,6,8,9,10},10,5};
    struct Array *arr3;
    arr3=Merge(&arr1,&arr2);
    Display(*arr3);
}
