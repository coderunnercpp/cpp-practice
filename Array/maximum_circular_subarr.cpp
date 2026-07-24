#include<iostream>
#include<climits>
using namespace std;
int kadaen(int arr[], int n){
    int maxSum =INT_MIN;
    for(int i =0; i<n; i++){
        int currentsum = 0;
        
        currentsum = currentsum + arr[i];
        if(currentsum<0){
            currentsum = 0;
        }
        maxSum = max(maxSum,currentsum);
    }
    return maxSum;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];

    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kadaen(arr,n);
    int totalsum = 0;
    for(int i =0; i<n; i++){
        totalsum = totalsum + arr[i];
        arr[i]= -arr[i];

    }
    wrapsum = totalsum + kadaen(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;


    return 0;
}