#include <string>
#include <iostream>
using namespace std;

// If a child class inherits a parent class(base class) and
// both classes contains constructors then first parent class
// constructor is called and later child class constructor is called.

// It's opposite in case of destructors -- first child class 
// destructor is called then parent class destructor is called

class Vehicle{
    public: 
    int speed;
    string color;
    int wheels;

    // default constructor
    Vehicle(){
        cout << "Parent Class Constructor called!!! " << endl;
    }

    // parameterised constructor
    Vehicle(int speed, string color, int wheels){
        this -> speed = speed;
        this -> color = color;
        this -> wheels = wheels;
        cout << "Parent class parameterised constructor called!" << endl;
    }

    void start(){
        cout << "vehicle starts!!!" << endl;
    }

    void applyBrakes(){
        cout << "Applying Brakes!!!" << endl;
    }

    ~ Vehicle(){
        cout << "Parent class destructor called!!! "<< endl;
    }
};

class Car: public Vehicle{
    public:
    string brandName;

    // default constructor
    Car(){
        cout << "Child Class Default constructor called!!!" << endl;
    }
    // parameterised constructor
    Car(int speed, string color, int wheels, string brandName) : Vehicle(speed, color, wheels){
        this -> speed = speed;
        this -> color = color;
        this -> wheels = wheels;
        this -> brandName = brandName;
        cout << "Child class parameterised constructor called!" << endl;
    }

    // opening sunroof
    void openSunroof(){
        cout << "Opening Sunroof !!!" << endl;
    }

    void display(){
        cout << "speed: " << speed << endl;
        cout << "color: " << color << endl;
        cout << "number of wheels: " << wheels << endl;
        cout << "brandName: " << brandName << endl;
    }

    ~ Car(){
        cout << "Child class destructor called!!" << endl;
    }
};

int main(){
    Car c(200, "black", 4, "mahindra");
    c.display();
    c.start();
    c.applyBrakes();
}

