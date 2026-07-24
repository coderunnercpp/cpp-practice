#include<iostream>
using namespace std;
#include<climits>
int main(){
    int n;
    int maxSum = INT_MIN;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0; i<n; i++){
        for(int j =i; j<n; j++){
            int sum = 0;
            for(int k =i; k<=j; k++){
                sum+=arr[k];
            }
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
    
}