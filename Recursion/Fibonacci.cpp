#include<iostream>
using namespace std;
int fib(int n){
    if(n=0 || n==1){
        return n;
    }
    int previous = fib(n-1);
    int previousPrevious = fib(n-2);
    return previous + previousPrevious;

}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
    
}