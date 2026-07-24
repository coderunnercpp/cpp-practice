#include<bits/stdc++.h>
using namespace std;
int main(){
    //char c[1000]={'1','w','3','a','\0'};
    string s;//="Hello world"; //Dynamic Array
   
    //Take input from user
    getline(cin,s,'.');
    
     cout<<s<<endl;

    for(char ch : s){
       cout<<ch<<", ";
   }

    //vector<string>.....
    // int n=5;
    // string temp;
    // vector<string> sarr;
    // while(n--){
    //     getline(cin,temp);
    //     sarr.push_back(temp);
    // }
    // for (string x:sarr){
    //     cout<<x<<","<<endl;
    // }
    return 0;
}