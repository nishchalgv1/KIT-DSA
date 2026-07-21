#include <string>
#include <iostream>
using namespace std;

class Student{
    private:
    int marks;
    string address;

    public:
    string name;

    Student(int marks, string address, string name){
        this -> marks = marks;
        this -> address = address;
        this -> name = name;
    }

    void writesCode(){
        cout << "Student writes code" << endl;
    }

    // getter
    void getMarks(){
        cout << "marks: " << marks << endl;
    }

    // getter to display data
    void displayData(){
        cout << "marks are: " << marks << endl;
        cout << "name is: " << name << endl;
        cout << "address is: " << address << endl;
    }

    // setter to modify marks
    void setMarks(int marks){
        this -> marks = marks;
        cout << "Marks updated!" << endl;

    }

    void setData(string name, int marks, string address){
        this -> name = name;
        if(marks >= 0){
            this -> marks = marks;
        }
        this -> address = address;
    }

};

int main(){
    Student s1(60, "Coimbatore", "Amit");
    // s1.getMarks();
    
    
    s1.displayData();

    s1.setData("Rohan", 40, "Pondicherry");
    s1.displayData();
}

