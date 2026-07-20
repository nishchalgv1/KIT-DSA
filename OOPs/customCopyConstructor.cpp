#include <iostream>
#include <string>
using namespace std;

class Student{
    public: 
    string name;
    int *marks;

    // parameterised constructor
    Student(string name, int marks){
        this -> name = name;
        this -> marks = new int(marks);
    }

    // copy constructor
    // this is how internal/default copy constructor 
    // behaves
    Student(Student &st){
        this -> name = st.name;
        this -> marks = st.marks; // shallow copy
        cout << "Copy Constructor called" << endl;
    }

};

int main(){
    Student s1("Hari", 99);

    Student s2(s1); // calling custom copy constructor to copy s1 into s2

    cout << *s2.marks << endl;
    cout << s2.name << endl;
    cout << endl;
    cout << "s1 address: " << s1.marks << endl;
    cout << "s2 address: " << s2.marks << endl;
}