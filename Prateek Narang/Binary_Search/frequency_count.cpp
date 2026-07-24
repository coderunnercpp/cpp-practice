#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>arr,int key){
    int n = arr.size();
     int s=0;
     int e=n-1;
     int mid;
     int ans=-1;
     while(s<=e){
        mid = (s+e)/2;
        if(arr[mid]==key){
           ans = mid;
           e=mid-1;
        }
      
      else if(arr[mid] > key){
          e=mid-1;

      }
      else{
         s= mid+1;
      }
      
}
return ans;

}
int upper_bound(vector<int>arr,int key){
    int n = arr.size();
     int s=0;
     int e=n-1;
     int mid;
     int ans=-1;
     while(s<=e){
        mid = (s+e)/2;
        if(arr[mid]==key){
           ans = mid;
           s=mid+1;
        }
      
      else if(arr[mid] > key){
          e=mid-1;

      }
      else{
         s= mid+1;
      }
      
}
return ans;

}
int main(){
    vector<int> arr= {0,1,1,2,3,3,3,3,3,4,5,5,5,5,10};
    int n = arr.size();
    int  low = lower_bound(arr,4);
    int high = upper_bound(arr,4);
    cout<<high-low+1<<endl;
    return 0;
}