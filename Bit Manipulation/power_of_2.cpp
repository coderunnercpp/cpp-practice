#include<iostream>
using namespace std;
int ispoweroftwo(int n){
    return (n&&!(n & n-1));
}
int main(){
    cout<<ispoweroftwo(4)<<endl;
    return 0;
}