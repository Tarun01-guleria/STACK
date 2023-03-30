#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*next;
};
struct Node*head  = NULL;
int size = 0;
void Push(int data){
    struct Node*newnode = new Node;
    newnode->data = data;
    newnode->next == NULL;
    if(newnode == NULL){
        cout << "Stack overflow"<<endl;
        return;
    }
    newnode->next = head;
    head  = newnode;
    size++;

}
bool isEmpty(){
    if(head == NULL){
        return true;
    }
    else{
        return false;
    }
}
int top(){
    if(isEmpty()){
        cout << "Empty Stack"<<endl;
        return -1;
    }
    return head->data;
    
}
int pop(){
    struct Node*temp = head;
    if(head == NULL){
        cout << "Stack Underflow"<<endl;
        return -1;
    }
    int delele = head->data;
    head = head ->next;
    size--;
    free(temp);
    return delele;
    

   
}

int Size(){
    return size;
}

int main (){
int n;
cin>>n;
for(int i = 1; i<=n; i++){
    int el;
    cin>>el;
    Push(el);
}
cout << "Top element of Stack ="<<top() << endl;
cout << "size of Stack = "<<Size() << endl;
for(int i = 1; i<=n; i++){
    cout << pop() << " ";
}
cout << "Size of stack after pop = "<<Size() << endl;
 
}