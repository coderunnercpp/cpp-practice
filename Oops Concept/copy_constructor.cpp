#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int roll_no;
    string name;
    public:
    student(int r, string s){
        roll_no = r;
        name = s;
    }
    
    student(const student &n){
        roll_no = n.roll_no;
        name = n.name;
    }

    void display(){
        cout<<"Roll number "<< roll_no << " "<<"Name" << " "<<name << endl;
    }

};
int main(){
    student s1(12 ,"Chandrakant");
    s1.display();
    student s2(s1);
    s2.display();
    return 0;

}