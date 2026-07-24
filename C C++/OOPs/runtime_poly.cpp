#include <bits/stdc++.h>
using namespace std;

class parent
{
public:
    void getInfo()
    {
        cout << "Parent Class\n";
    }

    virtual void hello(){
        cout <<"Hello from parent"<< endl;

    }
};

class child : public parent
{
public:
    void getInfo()
    {
        cout << "Parent Class\n";
    }

     void hello(){

        cout <<"Hello from child"<< endl;
         
    }
};

int main(){
    parent p;
    p.getInfo();
    return 0;
}