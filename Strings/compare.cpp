#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "hdgjadadgiyqw";
    string s2 = "xyz";
    if(!s1.compare(s2)){
        cout<<"The strings are equal"<<endl;
    }
    else{
        cout<<"The strings are not equal"<<endl;
    }
    return 0;
}