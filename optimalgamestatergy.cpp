#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }
    // Two stacks decleare:
    stack<int>s1; //X
    stack<int>s2; //Y
    // Declearing the answer list
    vector<int>ans;
    // X fill elements from back of the list
    for(int i = n-1; i>=0; i--){
      s1.push(arr[i]);
    }
    //Y fill elements from front of the list
    for(int i = 0; i<n; i++){
      s2.push(arr[i]);
    }
    //Filling the answer list
    while(true){
      if(s1.empty()||s2.empty()){
        break;
      }
      else if(s1.top()>s2.top()){
        ans.push_back(1);
        s2.pop();
      }
      else if(s1.top()<s2.top()){
        ans.push_back(2);
        s1.pop();
      }
      else{
        ans.push_back(0);
        s1.pop();
        s2.pop();
      }
    }
    //Printing the output
    for(int i = 0; i<ans.size(); i++){
      cout << ans[i] << " ";
    }
    
    
    return 0;
  }