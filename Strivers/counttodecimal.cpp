#include<bits/stdc++.h>
using namespace std;

int bintodecimal(string x){
     int length = x.size();
     int res = 0;
     int j =0;
     for(int i = length-1; i>=0; i--){
        
          res = res + (x[i] - '0') * pow(2,j);
          j++;
     }
     return res;
}
int main(){
    string s;
    cin>>s;
    cout << "Binary representation of n "<< bintodecimal(s);
}