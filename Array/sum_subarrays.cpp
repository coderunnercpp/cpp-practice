#include<iostream>
using namespace std;
main(){
     int n;
     cin>>n;
     int arr[n];
     int curr = 0;
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
      for(int i = 0; i<n; i++){  
          curr = 0;
          for(int j = i; j<n; j++){
              curr = curr + arr[j];
              cout<< curr<<endl;
          }
      }
     return 0;
}