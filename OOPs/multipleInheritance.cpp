// Engineer
// Teacher
// CodeTeacher --> Engineer + Teacher + Youtuber 
#include <string>
#include <iostream>
using namespace std;

class Engineer{
    public:
    string name;

    void aboutEngineer(){
        cout << "Hey My name is : " << name << endl;
    }
};

class Teacher{
    public: 
    string subject;

    void aboutTeacher(){
        cout << "I teach " << subject << endl;
    }
};

class Youtuber{
    public: 
    int subscribers;

    void aboutYoutuber(){
        cout << "I have a subscribers count of " << subscribers << endl;
    }
};

class Person: public Engineer, public Teacher, public Youtuber{
    public: 
    int age;

    Person(string name, int age, string subject, int subscribers){
        this -> name = name;
        this -> age = age;
        this -> subject = subject;
        this -> subscribers = subscribers;
    }

    void aboutPerson(){
        cout << "I am " << age << " years old" << endl;
    }

    void display(){
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "subscribers count: " << subscribers << endl;
    }
};

int main(){
    Person person("Arun", 40, "Physics", 1000);
    // person.display();

    person.aboutEngineer();
    person.aboutTeacher();
    person.aboutYoutuber();
}

