#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    deque<int> dq;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        if (!dq.empty() && dq.front() == (i - k))
            dq.pop_front();
        while (!dq.empty() && a[i] > a[dq.back()])
        {
            dq.pop_back();

            
        }
        dq.push_back(i);
        if((i+1)>=k){
            ans.push_back(a[dq.front()]);
        }
        for(auto i :ans){
            cout<<i<<" ";
        }
    }
  
}