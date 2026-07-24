#include<iostream>
using namespace std;

int getbit(int num, int pos){
    return ((num & (1<<pos))!=0); 
}
int main(){
    cout<<getbit(5,2)<<endl;
    return 0;
} 