#include<iostream>
using namespace std;
void towerofHanaoi(int n, char src,char destn,char helper ){
    if(n==0){
       return ;
    
    }
    towerofHanaoi(n-1,src,helper,destn);
    cout<<"Move from"<<" "<<src<<" "<<"to"<<" "<<destn<<endl;
    towerofHanaoi(n-1,helper,destn,src);
}
int main(){
     towerofHanaoi(10, 'A','C','B');
     return 0;
}