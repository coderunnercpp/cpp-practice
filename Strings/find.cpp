#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "nincompoop";
   cout<< s1.find("com")<<endl;
   cout<<s1.find("poop")<<endl;
   s1.insert(2,"lol");//insert
   cout<<s1.size()<<endl;//length
   cout<<s1<<endl;
   for(int i =0; i<s1.length();i++){
       cout<<s1[i]<<endl;
   }

   return 0;
}