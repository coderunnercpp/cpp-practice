// pillars encapsulation abstraction inheritance polymorphism

#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int age;
};

class Teacher
{

public:
    string subject;
    double salary;
};

class teachingAssistant : public student , public Teacher{

};
int main()
{

    teachingAssistant ta;

    ta.name = "Tony Starc";
    ta.age = 3000;
    ta.subject = "Maths";
    cout << "Subject : " << ta.subject << endl;
    cout << "Age: : " << ta.age << endl;
    cout << "Name : " << ta.name << endl;
    return 0;
}