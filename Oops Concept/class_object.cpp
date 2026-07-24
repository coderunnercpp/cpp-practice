#include <iostream>
using namespace std;
class student
{
  string name;

public:
  int age;
  bool gender;
  student (){
    cout<< "Default Constructor"<<endl;
  } //Default constructor
  student(string s, int a , int g){
    cout<< "Parameterised Constructor"<<endl;
    name = s;
    age = a;
    gender = g;
  }//Parameterised constructor

  student(student &a){
    cout<< "Copy Constructor"<<endl;
    name = a.name;
    age = a.age;
    gender = a.gender;
  }

  ~student(){
    cout<<"Destructor called"<<endl;
  }

  //To access private data outside of class make it a function
  void setName(string s)
  {
    name = s;
  }
  void getName()
  {
    cout << name << endl;
  }
  void printInfo()
  {
    cout << "Name = ";
    cout << name << endl;
    cout << "Age = ";
    cout << age << endl;
    cout << "Gender = ";
    cout << gender << endl;
  }
  bool operator == (student &a){
    if(name == a.name&&age == a.age && gender == a.gender){
      return true;
    }
    return false;
  }
};
int main()
{
  /* student arr[3];
  for (int i = 0; i < 3; i++)
  {
    /*cout<<"Name = ";
      cin>>arr[i].name;
      cout<<"Age = ";
      cin>>arr[i].age;
      cout<<"Gender = ";
      cin>>arr[i].gender;*/
    /*string s;
    cout << "Name = ";
    cin >> s;
    arr[i].setName(s);
    cout << "Age = ";
    cin >> arr[i].age;
    cout << "Gender = ";
    cin >> arr[i].gender;
  }
  for (int i = 0; i < 3; i++)
  {
    arr[i].printInfo();
  }*/

  // making constructor
  student a("Champ", 26, 0);
  //a.printInfo();
  student b("Aditya",23,0);
  student c = a;

  if(b==a){
    cout<<"same"<<endl;
  }
  else{
    cout<<"Not same"<<endl;
  }

  b.setName("Chandan");
  return 0;
}