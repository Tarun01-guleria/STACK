#include <bits/stdc++.h> 
using namespace std;
class NStack
{
    // Things to insert in constructor
     int*arr;   // Array for implementing stack.
    int*top;    // Array to maintain top of the m stacks
    int*next;   // Array to maintain the next if array stores something then next represents the next element after the top of the stack.
    // If the array stores nothing then the next represents the freespot.
    int n , s;
    int freespot;  //Represents the freespot 
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        // Write your code here.
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        // Intialize top
        for(int i = 0; i<n; i++){
            top[i] = -1;
        }
        // Intialize next
        for(int i = 0; i<s; i++){
            next[i] = i+1;
        }
        // update last index to -1
        next[s-1] = -1;
        freespot = 0;
    }

   
    bool push(int x, int m)
    {
        // Write your code here.
        if(freespot == -1){
            return false;
        }
        // Step 1: find index
        int index = freespot;
        // Step 2: Update freespot;
        freespot = next[index];
        //Step 3: insert element into the array i,e X
        arr[index] = x;
        // Step 4: update next
        next[index] = top[m-1];
        // Step 5: update top
        top[m-1] = index;
        return true;
    }

    // Pop operation is basically reverse of Push operation
    int pop(int m)
    {
        // Write your code here.
        // Check underflow condition
        if(top[m-1]==-1){
            return -1;
        }
        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};