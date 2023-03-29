#include <bits/stdc++.h>
  using namespace std;
  stack<int> s;
int minEle;
void Push(int x)
{
    if (s.empty()) {
        s.push(x);
        minEle = x;
    }
    else if (x > minEle) {
    s.push(x);
    }
    else {
        s.push(2 * x - minEle);
        minEle = x;
    }
}
void Pop()
{
    if (s.empty()) {
        cout << -1 << '\n';
    }
    else{
        int top = s.top();
        if (top < minEle)
            minEle = 2 * minEle - top;
        s.pop();
     }
}
int minimum()
{
    if(!s.empty())
        return minEle;
    else
        return -1;
}
int Top()
{
    if(s.empty())
        return -1;
    else{
    int t = s.top(); // Top element.
    // If t < minEle means minEle stores
    // value of t.
    return (t < minEle)? minEle:t;
    }
}   
  int main (){
    int q;
    cin>>q;
    while(q--){
      int k;
      cin>>k;
      if(k==1){
        int x;
        cin>>x;
        Push(x);
      }
      else if(k==2){
        Pop();
      }
      else if(k==3){
        cout << Top() << endl;
      }
      else if(k==4){
        cout << minimum() << endl;
      }
    }
    
  }