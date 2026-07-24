// pillars encapsulation abstraction inheritance polymorphism

#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;

    person(string name, int age)
    {
        cout << "Base Constructor" << endl;
        this->age = age;
        this->name = name;
    }

    //     person(){
    //    cout<< "Base Constructor"<< endl;
    //     }
    ~person()
    {
        cout << "Base Destructor" << endl;
    }
};

class student : public person
{
public:
    int roll;
    void getInfo()
    {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "roll no:" << roll << endl;
    }
    student(string name, int age, int roll) : person(name, age)
    {
        this->roll = roll;
        cout << "child constructor" << endl;
    }
    ~student()
    {
        cout << "child Destructor" << endl;
    }
};

int main()
{

    student s("Chandrakant", 23, 1234);

    s.getInfo();
    return 0;
}