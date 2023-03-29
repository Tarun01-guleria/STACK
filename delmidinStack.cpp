#include <bits/stdc++.h>
using namespace std;
void Solve(stack<int> &st, int size, int count)
{
    if (count == size / 2)
    {
        st.pop();
        return;
    }
    int num = st.top();
    Solve(st, size, count + 1);
    st.push(num);
}
void deleteMidelement(stack<int> &st, int N)
{
    int count = 0;
    Solve(st, N, count);
}

