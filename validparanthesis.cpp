#include <iostream>
#include <stack>
using namespace std;
bool isValid(string expression)
{
    stack<char> st;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
        // If Opening bracket push in stack
        // If closing brack check stacktop and pop
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        // in case of closing bracket
        else
        {
            if (!st.empty())
            {
                char top = st.top();
                if ((ch == ')' && st.top() == '(') ||
                    ((ch == '}' && st.top() == '{')) ||
                    ((ch == ']' && st.top() == '[')))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string expression = "[({})]";
    int res = isValid(expression);
    if (res)
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "UnBalanced" << endl;
    }
}