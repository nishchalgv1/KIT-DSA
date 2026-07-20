#include <string>
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollNo;
    int marks;
    bool isPresent;

    // default constructor implementation
    Student(){
        name = "Rahul";
        marks = 100;
        isPresent = true;
        cout << "Default Constructor Called! " << endl;
    }
};

int main(){
   Student s1;
   s1.name = "Rohit";
   cout << s1.name << endl;

   cout << "marks: " << s1. marks << endl;
   cout << "Roll No: " << s1.rollNo << endl;
}
