#include <bits/stdc++.h>
using namespace std;
class Solution 
{
    private:
    bool knows(vector <vector<int> >& M , int a , int b , int n){
        if(M[a][b]==1){
            return true;
        }
        else{
            return false;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {

        //Step1 push all elements in stack
        stack<int>s;
        for(int i = 0; i<n; i++){
            s.push(i);
        }
        // step 2
        while(s.size()>1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if(knows(M ,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int candidate = s.top();
        // Single element in stack is potential celeberity so verify it
        int zeroCount = 0;
        for(int i = 0; i<n; i++){
            if(M[candidate][i]==0){
                zeroCount++;
            }
        }
        if(zeroCount!=n){
            return -1;
        }
        int colCount = 0;
        for(int i = 0; i<n; i++){
            if(M[i][candidate]==1){
                colCount++;
            }
        }
        if(colCount!=n-1){
            return -1;
        }
       return candidate;
    }
};