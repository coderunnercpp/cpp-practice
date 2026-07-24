#include <bits/stdc++.h>
using namespace std;
bool Isvalid(string s)
{
    int n = s.size();
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' or s[i] == '[' or s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty()&&st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty()&&st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty()&&st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if(!st.empty()){
      return false;
      }
     return ans; 
}
int main()
{
    string s = "]";

    if (Isvalid(s)) 
    {
        cout << "valid string" << endl;
    }
    else
    {
        cout << "Not a valid string" << endl;
    }
    return 0;
}