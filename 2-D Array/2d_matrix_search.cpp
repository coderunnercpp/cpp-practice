#include<iostream>
using namespace std;
int main(){
    int  n,m;
    int target;
    cin>>target;
    cin>>n>>m;
    int arr[n][m];
    
     
    for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    bool found = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==target){
                found = true;
            }
        }
    }
    if(found){
        cout<<"Element is found";
    }
    else{
        cout<<"Element is not found";
    }

    return 0;
}