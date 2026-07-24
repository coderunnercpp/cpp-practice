#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if (ch>= 'A' && ch<='Z'){
        cout<<"This is upper case"<< endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<"This is lower case"<<endl;
    }

    else if(ch>='0' and ch<='9'){
        cout<<"This is the character" << endl;
    }
return 0;
    
}
