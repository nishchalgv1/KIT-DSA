#include <iostream>
#include <string>
using namespace std;

// Engineer -- Employee --- Manager

class Engineer{
    public:
    string name;

    void aboutEngineer(){
        cout << "My name is " << name << endl;
    }
};

class Employee: public Engineer{
    public:
    int salary;
    string role;

    public:
    void aboutEmployee(){
        cout << "I work as a " << role << endl;
        cout << "My salary is: " << salary << endl;
    }
};

class Manager: public Employee{
    public:
    string department;
    int numOfEmployees;

    Manager(string name, int salary, string role, string department, int numOfEmployees){
        this -> name = name;
        this -> salary = salary;
        this -> role = role;
        this -> department = department;
        this -> numOfEmployees = numOfEmployees;
    }

    public:
    void aboutManager(){
        cout << "I work in " << department << endl;
        cout << "I lead a team of " << numOfEmployees << endl;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Role: " << role << endl;
        cout << "Department: " << department << endl;
        cout << "Number of Employees working under " << name << ":" << numOfEmployees << endl;
    }

};

int main(){
    Manager manager("Bala", 500000, "Software Enginner", "IT", 30);
    manager.display();

   manager.aboutEmployee();

    manager.aboutEngineer();
}