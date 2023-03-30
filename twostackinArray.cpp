#include <bits/stdc++.h>
using namespace std;
class StackArray{
    public:
    int*arr;
    int size;
    int top1 , top2;
    StackArray(int n){
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;

    }
    void push1(int data){
        if(top1<top2-1){
            arr[++top1] = data;
        }
       else{
        cout << "Stack1 overflow"<<"\n";
       }

    }
    void push2(int data){
        if(top1<top2-1){
            arr[--top2] = data;
        }
        else{
            cout << "Stack2 overflow"<<"\n";
        }
    }
    void pop1(){
        if(top1>-1){
            int popele = arr[top1--];
            cout << "Stack1 popedelement = "<<popele<<endl;

        }else{
            cout << "Stack1 Underflow"<<endl;
        }
    }
    void pop2(){
        if(top2<size){
            int popelem = arr[top2++];
            cout << popelem<<endl;
        }else{
            cout << "Stack2 Underflow"<<endl;
        }
    }
    void print1(){
      for(int i = top1; i>=0; i--){
        cout << arr[i] << " ";
      }cout << "\n";
      
    }
    void print2(){
     for(int i = top2; i<size; i++){
        cout << arr[i]<<" ";
     }
     cout << "\n";
    }

};
int main () {
    int n;
    cin>>n;
    StackArray sa(n);
    int stack1 , stack2;
    cin>>stack1>>stack2;
    int ele;
    for(int i = 0; i<stack1; i++){
        cin>>ele;
       sa.push1(ele);
    }
    for(int i = 0; i<stack2; i++ ){
        cin>>ele;
        sa.push2(ele);
    }
    cout << "Stack1 = ";
    sa.print1();
    cout << "stack2 = ";
    sa.print2();
    sa.push1(50);
    int num = sa.top1+1;
    while(num){
        sa.pop1();
        num--;
    }
    sa.pop1();
    return 0;
}