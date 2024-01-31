#include<iostream>
using namespace std;
struct Queue{
	int data;
	Queue *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
	Queue *t=new Queue;
	if(t==NULL){
		cout<<"Queue is full";
	}
	else{
		t->data=x;
		t->next=NULL;
		if(front==NULL){
			front=rear=t;
		}
		else{
			rear->next=t;
			rear=t;
		}
	}
}

int dequeue(){
	int x=-1;
	if(front==NULL){
		cout<<"queue is empty";
	}
	else{
		x=front->data;
		front=front->next;	
	}
	return x;
}

int isempty(){
	return front==NULL;
}

// breadth first search
void BFS(int G[][7],int start,int n){
	int visited[7]={0};
	int i=start;
	cout<<i<<" ";
	enqueue(i);
	visited[i]=1;
	while(!isempty()){
		i=dequeue();
		for(int j=1;j<7;j++){
			if(G[i][j]==1 && visited[j]==0){
				cout<<j<<" ";
				visited[j]=1;
				enqueue(j);
			}
		}
	}
	
}

// depth first search
void DFS(int G[][7],int start,int n){
	static int visited[7]={0};
	int j=0;
	if(visited[start]==0){
		cout<<start<<" ";
		visited[start]=1;
		for(j=1;j<n;j++){
			if(G[start][j]==1 && visited[j]==0) {
				DFS(G,j,n);
			}
		}
	}
}

int main(){
	int G[7][7]={{0,0,0,0,0,0,0},
				 {0,0,1,1,0,0,0},
				 {0,1,0,0,1,0,0},
				 {0,1,0,0,1,0,0},
				 {0,0,1,1,0,1,1},
				 {0,0,0,0,1,0,0},
				 {0,0,0,0,1,0,0}
				};
				
	DFS(G,1,7); //value changes on starting vertices
	cout<<endl;
	//BFS(G,5,7);				
}	
