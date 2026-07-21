#include <string>
#include <iostream>
using namespace std;

class Vehicle{
    public: 
    int speed;
    string color;
    int wheels;

    void start(){
        cout << "vehicle starts!!!" << endl;
    }

    void applyBrakes(){
        cout << "Applying Brakes!!!" << endl;
    }
};

class Car: public Vehicle{
    public:
    string brandName;

    Car(int speed, string color, int wheels, string brandName){
        this -> speed = speed;
        this -> color = color;
        this -> wheels = wheels;
        this -> brandName = brandName;
        cout << "Car class constructor called!" << endl;
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
};

int main(){
    Car c(200, "black", 4, "mahindra");
    c.display();
    c.start();
    c.applyBrakes();
}

