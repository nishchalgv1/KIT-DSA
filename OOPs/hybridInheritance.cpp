// Student - Boy, Girl
#include <string>
#include <iostream>
using namespace std;

class Student{
    public: 
    string name;
    int marks;

    void study(){
        cout << "Student study" << endl;
    }
};

class Male{
    public:
    string gender;

    void maleIntro(){
        cout << "Gender is " << gender << endl;
    }
};

class Female{
    public:
    string gender;

    void FemaleIntro(){
        cout << "Gender is " << gender << endl;
    }
};

class Boy: public Student, public Male{
    public:
    Boy(string name, int marks, string gender){
        this -> name = name;
        this -> marks = marks;
        this -> gender = gender;
    }

    void boyIntro(){
        cout << "My name is " << name << endl;
        cout << "Gender is " << gender << endl;
        cout << "I got " << marks << endl;
    }
};

class Girl: public Student, public Female{
    public:
    Girl(string name, int marks, string gender){
        this -> name = name;
        this -> marks = marks;
        this -> gender = gender;
    }
    void girlIntro(){
        cout << "My name is " << name << endl;
        cout << "Gender is " << gender << endl;
        cout << "I got " << marks << endl;
    }
};

int main(){
   Boy boy("Rahul", 100, "Male");
   boy.boyIntro();

   Girl girl("Shreya", 200, "Female");
   girl.girlIntro();
}