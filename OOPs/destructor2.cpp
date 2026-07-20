#include <iostream>
using namespace std;

class Student{
    public: 
    string name;
    int* marks;

    // parameterised constructor
    Student(string name, int marks){
        this -> name = name;
        this -> marks = new int(marks);
        cout << "Parameterised Constructor called! " << endl;
    }

    // destructor to dellocate dynamic memory
    ~ Student(){
        delete marks;
        cout << "Destructor called! " << endl;
    }
};

int main(){
    Student s("Rohit", 100);
    cout << "name: " << s.name << " marks: " 
    << *s.marks << endl;
}