#include <bits/stdc++.h>
using namespace std;
pair<int, int> subarraysort(vector<int> a)
{
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int n = a.size();
    int i=0;
    if(a[i]>a[i+1]){
        largest = max(a[i],largest);
        smallest = min(a[i],smallest);
    }
     if(a[n-1]<a[n-2]){
        largest = max(a[n-1],largest);
        smallest = min(a[n-1],smallest);
    }

    for ( i = 1; i < n-1; i++)
    {
        if(a[i]>a[i+1] || a[i]<a[i-1]){
            largest = max(a[i],largest);
            smallest = min(a[i],smallest);
        }
    }
    if (smallest==INT_MAX){
        return {-1,1};
    }
    int left=0;
    while(smallest>=a[left]){
        left++;
    }
    int right=a.size()-1;
    while(largest<=a[right]){
        right--;
    }
    return {left,right};
    
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
    auto p = subarraysort(arr);

    cout << p.first << " and " << p.second << endl;
    return 0;
}