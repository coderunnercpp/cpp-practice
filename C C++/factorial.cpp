#include<iostream>
using namespace std;
int fact(int n){
    int f1 = 1;
    for(int i = 2; i <=n;i++){
       f1 = f1 * i;  
     }
     return f1;
}
int main(){
    int n;
    cin>>n;
   int ans = fact(n);
   cout<<ans<<endl;
    return 0;
}