#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> triplets(vector<int> arr, int sum)
{
    //logic
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    //pick every a[i], pair sum for remaining part;
    for (int i = 0; i <= arr.size() - 3; i++)
    {
        int j = i + 1;
        int k = arr.size() - 1;

        //two pointer
        while (j < k)
        {
            int s = arr[i];
            s += arr[j];
            s += arr[k];
            if (s == sum)
            {
                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (s > sum)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return result;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int sum = 18;
    auto result = triplets(arr, sum);
    for(auto v:result){
        for(auto no : v){
            cout<<no<<" ";
        }
        cout<<endl;
    }

    return 0;
}