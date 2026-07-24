#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int n, int mid, int m)
{
    int students = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
            return false;
        if (arr[i] + pages > mid)
        {
            students++;
            pages = arr[i];
            if(students>m){
                return false;
            }
        }
        else{
            pages+=arr[i];
        }
    }
    return true;
}
int pageAllocation(int arr[], int n, int m)
{
    int low = 0;
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    int high = sum;

    int result = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isPossible(arr, n, mid, m))
        {
            result = min(result, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    cout << pageAllocation(arr, n, m);
    return 0;
}