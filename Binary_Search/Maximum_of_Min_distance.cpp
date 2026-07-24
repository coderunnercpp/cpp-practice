#include <bits/stdc++.h>
using namespace std;
bool isFeasible(int mid,int arr[],int n,int k){
    int pos = arr[0]; int elements =1;
    for (int i=1;i<n;i++){
        if(arr[i]-pos>=mid){
            elements++;
            pos=arr[i];
            if(elements ==k){
                return true;
            }
        }
    }
    return false;  
     
}
int Maximum_In_Minimum(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int left = 1;
    int right = arr[n - 1];
    int result = -1;
    while(left<right){
        int mid = (left+right)/2;
        if(isFeasible(mid,arr,n,k)){
            result=max(result,mid);
            left = mid+1;
        }
        else{
            right = mid;
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
    int k;
    cin >> k;
    cout << Maximum_In_Minimum(arr, n, k);
    return 0;
}