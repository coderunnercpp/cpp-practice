#include<iostream>
using namespace std;
int fact(int n){
   int f1= 1;
    for (int i = 2;i <=n;i++){
        f1 = f1*i;

    }
    return f1;

}

int main(){
    int n;
    cin>>n;
    for(int i = 0;i < n; i++){
        for(int j = 0;j<=i;j++){

        cout<<fact(i)/(fact(j)*fact(i - j))<<" ";


        }
        cout<<endl;
    }


    return 0;


}