#include <string>
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollNo;
    int marks;
    bool isPresent;
    string branch;
    string city;

    // default constructor implementation
    Student(){
        cout << "Default Constructor Called! " << endl;
    }

    // custom constructor (parameterised constructor)
    // parameterised constructor
    Student(int rollNo){
        rollNo = rollNo;
        cout << "Paremeterised constructor 1 called! " << endl;
    }
    Student(string n, int m){
        name = n;
        marks = m;
        cout << "Parameterised constructor 2 called!" << endl;
    }

    Student(string branch, string city, bool isPresent){
        this -> branch = branch; // this points to the current object's memory address
        this -> city = city;
        this -> isPresent = isPresent;
        cout << "Parameterised constructor 3 called!" << endl;
    }

    // default destructor
    ~ Student(){
        cout << "Destructor Called!" << endl;
    }


};

int main(){
  // Student s1; // invokes default constructor
   
   //Student s3(12); // calling parameterised constructor 1

   //Student s2("Rahul", 100); // calling parameterised constructor 2

  Student s4("CS", "Coimbatore", true); // constructor 3
   cout << s4.branch << " " << s4.city << " " << s4.isPresent << endl;
   cout << "branch: " << s4.branch << endl;

}
