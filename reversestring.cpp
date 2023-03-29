#include <bits/stdc++.h>
using namespace std;
string reverse(string s){
    string rev = "";
    stack<char>st;
    for(int i = 0; i<s.length(); i++){
        st.push(s[i]);

    }
    while(!st.empty()){
        rev+=st.top();
        st.pop();
    }
    return rev;
}
int main (){
    string s;
    cin>>s;
    cout <<  reverse(s) << endl;

}