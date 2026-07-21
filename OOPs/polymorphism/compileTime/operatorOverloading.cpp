#include <iostream>
#include <string>
using namespace std;

class Fraction{
    private:
    int numerator;
    int denominator;

    public:
    // default constructor
    Fraction(){
        numerator = 0;
        denominator = 1;
    }

    // parameterised constructor
    Fraction(int numerator, int denominator){
        this -> numerator = numerator;
        this -> denominator = denominator;
    }

    // overload the operator
    Fraction operator+(const Fraction &f){
        int newNumerator = (numerator * f.denominator) + (f.numerator * denominator);
        int newDenominator = (denominator * f.denominator);
        return Fraction(newNumerator, newDenominator);
    }

    void display(){
        cout << numerator << "/" << denominator;
    }

};

int main(){
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3; // default constructor 
    f3 = f1 + f2;

    f3.display();
}