#include<bits/stdc++.h>
using namespace std;

vector<int> pairsum (vector<int> arr,int sum){
     //logic
     unordered_set<int> S;
     vector<int> result;
     for(int i=0;i<arr.size();i++){
         int x = sum -arr[i];
         if(S.find(x)!=S.end()){
             result.push_back(x);
            result .push_back(arr[i]);
            return result;
         }
         //Insert the current number inside the set
         S.insert(arr[i]);
     }
     return {};
     

}

int main(){
    vector<int> arr{10,5,2,3,-6,9,11};
    int sum =4;
    auto p = pairsum(arr,sum);
    if(p.size()==0){
        cout<<"No such Pair";
    }
    else{
        cout<<p[0]<<","<<p[1]<<endl;
    }
    return 0;
}
 
