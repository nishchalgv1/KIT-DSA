#include <iostream>
#include <string>
using namespace std;

// Default Copy Constructor does shallow copy if class contains
// dynamic data members
class Student{
    public: 
    string name;
    int *marks;
    int rollNo;

    // default constructor
    Student(){
        // default initial values
        name = "Amit";
        marks = new int(50);
        rollNo = 10;
        cout << "Default Constructor Called!" << endl;
    }

    void study(){
        cout << "Student study!!! " << endl;
    }
};

int main(){
    Student s1;  // 50
    Student s2 = s1; // 50 

    //s2.study();
    
    // modify s1 and s2
    *s1.marks = 90; // modifying through s1
    cout << "s1 marks: " << *s1.marks << endl; //90
    cout << "s2 marks: " << *s2.marks << endl;// 50

    // print the address of object s1 and s2
    cout << "address of s1: " << s1.marks << endl;
    cout << "address of s2: " << s2.marks << endl;

    // modify through s2;
    *s2.marks = 200;
    cout << "s1 marks after modifying through s2: " << *s1.marks << endl; //200
    cout << "s2 marks after modifying through s2: " << *s2.marks << endl; //200
}