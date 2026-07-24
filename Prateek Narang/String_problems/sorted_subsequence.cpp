#include <bits/stdc++.h>
using namespace std;
void subsequence(string s, string output, vector<string>& v)
{
    //base case
    if (s.size() == 0)
    {
        v.push_back(output);
        return;
    }
    //Recursive Case
    char ch = s[0];
    string reduced_input = s.substr(1);
    //include
    subsequence(reduced_input, output + ch, v);
    //exclude
    subsequence(reduced_input, output, v);
}
bool compare(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return s1 < s2;
    }
    return s1.length() < s2.length();
}
int main()
{
    string s;
    cin >> s;
    vector<string> v;
    string output = "";
    subsequence(s, output, v);
    sort(v.begin(), v.end(), compare);
    for (auto s : v)
    {
        cout << s << " ";
    }

    return 0;
}