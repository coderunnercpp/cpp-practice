#include <bits/stdc++.h>
using namespace std;
string extractStringAtkey(string str,int key){
    //string tokeniser
    //hello how are you
    char *s=strtok((char*)str.c_str()," ");
    while(key>1){
        s=strtok(NULL," ");
        key--;
    }
    return (string)s;
}
int convertToInteger(string s){
    int ans =0;
    int p=1;
     for(int i=s.length()-1;i>=0;i--){
         ans+=((s[i]-'0')*p);
         p=p*10;
     }
     return ans;
}
bool lexicoCompare(pair<string,string> s1,pair<string,string> s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
}
bool numericCompare(pair<string,string> s1,pair<string,string> s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return convertToInteger(key1)<convertToInteger(key2);
}
int main()
{
    int n;
    cin >> n;

    cin.get(); //consume the extra \n
    string temp;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {

        getline(cin, temp);//includes white spaces 
        v.push_back(temp);
    }
    int key;
    string reversal,ordering;
    cin >>key>>reversal>>ordering;
   
    //1.To extract the keys for the comparision and store it
    vector<pair<string,string>> vp;
    for(int i=0;i<n;i++){
        vp.push_back({v[i],extractStringAtkey(v[i],key)});
    }

    //2.Sorting
    if(ordering=="numeric"){
        sort(vp.begin(),vp.end(),numericCompare);
    }
    else{
        sort(vp.begin(),vp.end(),lexicoCompare);
    }

    // 3)Reversal 
    if(reversal=="true"){
        reverse(vp.begin(),vp.end());
    }
    //4 Output
    for(int i=0;i<n;i++){
        cout<<vp[i].first<<endl;
    }

}