#include <iostream>
using namespace std;

class CoffeeMachine{
    private:
    void boilWater(){
        cout << "Water Boils" << endl;
    }

    void addMilk(){
        cout << "Adding Milk" << endl;
    }

    void addCoffeePowder(){
        cout << "Adding Coffee Powder" << endl;
    }

    public: 
    void makeCoffee(){
        cout << "Coffee is preparing..." << endl;
        boilWater();
        addMilk();
        addCoffeePowder();
    }
};

int main(){
    CoffeeMachine c;
    
    c.makeCoffee();
}