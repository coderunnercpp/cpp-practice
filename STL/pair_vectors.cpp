#include<iostream>
#include"bits/stdc++.h"
using namespace std;
int main(){
    //syntax 
    //pair<1,2>//1,2 are data types of which we have to make pair
    pair<int,string>p;
    //How to insert values in p
    //Two ways:
   // p={2,"abc"};
    p=make_pair(2,"abc");
    //pair copy:
    //pair<int,string>p1=p;//By copy
    //pair<int,string>&p1=p;//By reference
    cout<<p.first<<" "<<p.second<<endl;
    //To take input
    //cin>>p.first;cin>>p.second;
    //why we use pair
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    } 

    

}
/*VECTOR
void printVec(vector<int> v){
    cout<<"Vector size"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.[i]<<" ";
    }
    cout<<<<endl;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        v.pop_back();//remove last element
        NOTE:We can copy vector unlike array
        vector<int> v2=v;O(N)
    }
    printVec(v);
}*/