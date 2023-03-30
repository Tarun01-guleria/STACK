#include <bits/stdc++.h>
using namespace std;
class Stack{
 int capacity;
 int top;
 int*arr;
 int minEle;
 public:
//  Constructor to intialize the stack
 Stack(int capacity){
    this->capacity = capacity;
    top = -1;
    arr = new int [capacity];


 }
 int size(){
    return top+1;
 }
bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    if(top+1 == capacity){
        return true;

    }
    else{
        return false;
    }
}
int peek(){
    return arr[top];
}
void push(int item){
    if(isFull()){
        cout << "Stack overflow"<<endl;
    }
    top = top+1;
    arr[top] = item;

}
int pop(){
    if(isEmpty()){
        cout << "Stack Underflow"<<endl;
        return -1;
    }
    int delele = arr[top];
    top = top-1;
    return delele;
}
};
int main (){
    int capacity , n;
    cin>>capacity>>n;
    Stack st(capacity);
    for(int i = 1; i<=n; i++){
        int el;
        cin>>el;
        st.push(el);
    }
    cout << "top of stack = "<<st.peek()<<endl;
    cout << "size of stack = "<<st.size() << endl;
    for(int i = 1; i<=n; i++){
       cout <<  st.pop() << " ";
    }

 
}