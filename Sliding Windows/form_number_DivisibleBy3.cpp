#include <bits/stdc++.h>
using namespace std;
void check(vector<int> arr, int k)
{
    pair<int, int> ans;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    bool found = false;
    if (sum % 3 == 0)
    {
        ans = {0, k - 1};
        found = true;
    }
    for (int j =k;j<arr.size();j++){
       if (found){
           break;
       }
       sum = sum+ arr[j]- arr[j-k];
       if(sum%3==0){
           found = true;
           ans={j-k+1,j}; 
       }
    }
    if(!found){
        
        ans = {-1,0};
    }
    if(ans.first== -1){
        cout<<"No such array"<<endl;
    }
    else{
        for (int i = ans.first;i<=ans.second;i++){
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    vector<int> arr = {84, 23, 45, 12, 56, 82};
    int k = 3;
    check(arr, k);
    return 0;
}