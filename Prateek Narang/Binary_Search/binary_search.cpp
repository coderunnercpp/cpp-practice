#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s = 0;
    int e =n-1;
    int mid;
    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,4,6,8,12,15,46};
    cout<<binarySearch(arr,7,8)<<endl;

    return 0;

}