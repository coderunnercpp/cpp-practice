#include<iostream>
using namespace std;

bool pairsum(int arr[],int n,int k){
    int high = n-1;
    int low = 0;
    while(low<high){
    if(arr[high]+arr[low]==k){
        cout<<low<<" "<<high<<endl;
        return true;
      }
    else if(arr[high]+arr[low]>k){
        high--;
       }
    else {
        low++;
      }

    }
    return false;
}


int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k = 31;
    cout<<pairsum(arr,8,k)<<endl;
    return 0;
}