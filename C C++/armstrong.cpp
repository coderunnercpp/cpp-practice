#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    double sum = 0;
    int originaln = n;
    int lastdigit;
    while(n>0){
         lastdigit = n % 10;
        sum = sum + pow(lastdigit,3);
        n = n/10;
    }
    if(sum==originaln){
        cout<<"it is armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }

    return 0;
}