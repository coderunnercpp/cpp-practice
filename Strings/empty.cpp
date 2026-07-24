#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "abc";
    cout<<s1<<endl;

   //s1.clear();

    if (s1.empty()){
        cout<<"The string is empty";
    }
    else {
        cout<<"The string is not empty";
    }    
       
     return 0;
    
}