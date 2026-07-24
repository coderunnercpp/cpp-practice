#include <bits/stdc++.h>
using namespace std;
bool isSubset(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    int i = n1 - 1;
    int j = n2 - 1;
    while (i >= 0 && j >= 0)
    {
        if (s1[i] == s2[j])
        {
            i--;
            j--;
        }
        else
        {
            i--;
        }
    }
    if(j<0){
        return true;
    }
    else return false;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << isSubset(s1, s2) << endl;
    return 0;
}