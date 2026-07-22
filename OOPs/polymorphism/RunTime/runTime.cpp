#include <string>
#include <iostream>
using namespace std;

class Animal{
    public: 
    string eats;

    virtual void sound(){
        cout << "Animal makes sound" << endl;
    }
};

class Dog: public Animal{
    public:
    void sound(){
        cout << "Dog barks" << endl;
    }
};

class Cat: public Animal{
    public:
    void sound(){
        cout << "Cat meows" << endl;
    }
};

int main(){

    Animal* ptr;
    // ptr -> sound(); // Animal makes sound

    Dog d;
    ptr = &d;

    ptr -> sound(); // Dog barks

    Cat c;
    ptr = &c;
    ptr -> sound(); // 
    // Dog d;
    // d.sound();

    // Cat c;
    // c.sound();
}