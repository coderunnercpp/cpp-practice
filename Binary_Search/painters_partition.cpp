#include <bits/stdc++.h>
using namespace std;

int findpainters(int arr[], int n, int mid)
{
    int sum = 0;
    int painters = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > mid)
        {
            painters++;
            sum = arr[i];
        }
    }
    return painters;
}
int painterspartition(int boards[], int n, int m)
{

    //sort(boards,boards+n);
    int totallength = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k = max(k, boards[i]); 
        totallength += boards[i];
    }
    int low = k;
    int hi = totallength;
    int result = INT_MAX;
    while (low <  hi)
    {
        int mid = (low + hi) / 2;
        int painter = findpainters(boards,n,mid);
        if(painter<=m){
            hi = mid;
        }
        else {
            low = mid+1;
        }
    }
    return low;
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
    cout<<painterspartition(arr,n,m);

    return 0;
}