#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Method 1
    // string input;
    // getline(cin,input);
    //"This is a sunny day"

    // //create a string stream objects
    // stringstream ss(input);

    // //>> and << ope rators.
    // string token;
    // vector<string> tokens;
    // while(getline(ss,token,' ')){
    //     tokens.push_back(token);
    // }
    // //print all the tokens
    // for(auto i:tokens ){
    //     cout<<i<<",";
    // }

    //METHOD 2 (strtok())
    char input[1000];
    cin.getline(input, 1000);
    // cout<<strtok(input," ")<<endl;

    //  cout<<strtok(input," ")<<endl;
    //  cout<<strtok(input," ")<<endl; return same first word every time
    // cout<<strtok(NULL," ")<<endl;// Internally maintains the state of the string you passed in the last fn call,static variable
    // cout<<strtok(NULL," ")<<endl;
    // cout<<strtok(NULL," ")<<endl;
    char *token = strtok(input, " ");
    while (token != NULL)
    {

        cout << token << endl;
        token = strtok(NULL, " ");
    }
    return 0;
}