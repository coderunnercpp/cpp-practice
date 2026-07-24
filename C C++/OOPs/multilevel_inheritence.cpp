// pillars encapsulation abstraction inheritance polymorphism

#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;
};

class student : public person
{
public:
    int roll;
};

class graduateStudent : public student
{

public:
    string researchArea;
};

int main()
{

   graduateStudent s;

    s.name = "Tony Starc";
    s.age = 3000;
    s.researchArea = "Jarvis";
    cout << "Research Area : " << s.researchArea << endl;
    cout << "Age: : " << s.age << endl;
    cout << "Name : " << s.name << endl;
    return 0;
}