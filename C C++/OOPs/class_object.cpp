#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    float salary;

public:
//Non Parameterized constructor
    Teacher()
    {
        cout << "I am constructor" << endl;
        department = "Computer Science";
    }
    // properties//attributes
    string name;
    string department;
    string subjects;
//Parameterized constructor
    Teacher(string n, string s, double sal, string d){
        name = n;
        subjects = s;
        department = d;
        salary = sal;
    }
    // methods//member functions
    void changeDepartment(string newDept)
    {
        department = newDept;
    }
    // setter
    void setSalary(double s)
    {
        salary = s;
    }
    // getter
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1("Chandrakant","English", 299999, "Computer Science");
    t1.name = "Sooryavansi";
    t1.setSalary(10000000);

    cout << t1.name << endl;
    cout << t1.department << endl;

    cout << t1.getSalary() << endl;
    return 0;
}