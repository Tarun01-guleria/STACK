#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Structure of stack
typedef struct Stack{
 int capacity;
 int top;
 int *arr;
}Stack;
//Function to intialize stack
Stack*intializeStack(int capacity){
	Stack*st = new Stack;
	st->capacity = capacity;
	st->top = -1;
	st->arr = (int*) malloc(sizeof(int)*capacity);
	return st;
}
// functions of stack
int size(Stack *st){
	return st->top+1;
}
bool isEmpty(Stack*st){
  if(st->top == -1){
  	return true;
  }
  else{
  	return false;
  }
}
bool isFull(Stack*st){
	if(st->top == st->capacity-1){
		return true;
	}
	else{
		return false;
	}

}

void push(Stack*st , int item ){
	if(isFull(st)){
		cout << "Stack overflow"<<endl;
	}
	st->top = st->top+1;
	st->arr[st->top] = item;

 

}
int peek(Stack *st){
	if(isEmpty(st)){
		cout << "Stack underflow"<<endl;
	}
	return st->arr[st->top];

}
int pop(Stack*st){
  if(isEmpty(st)){
  	cout << "Stack underflow";
  }
  int popedel = st->arr[st->top];
  st->top = st->top-1;
  return popedel;
}

int main (){
   
	
    int capacity;//max capacity
    cin>>capacity;
    int n;//no of elements to insert
    cin>>n;
    Stack*st = intializeStack(capacity);
    for(int i = 0; i<n; i++){
    	int ele;
    	cin>>ele;
    	push(st,ele);
    }
    cout << "Top of stack"<<peek(st)<<endl;
    cout << "Size of stack"<<size(st)<<endl;
    if(isEmpty(st)){
        cout << "Stack is empty"<<endl;
    }
    else{
        cout << "Stack is not empty"<<endl;
    }
    
    for(int i = 0; i<n; i++){
       cout <<  pop(st) << " ";
    }
    cout << "Size of stack after pop"<<size(st) << endl;
    cout << "Chek if empty or not after poping"<<endl;
    if(isEmpty(st)){
        cout << "empty"<<endl;
    }
    else{
        cout << "Not empty"<<endl;
    }
    
    

    return 0;
}