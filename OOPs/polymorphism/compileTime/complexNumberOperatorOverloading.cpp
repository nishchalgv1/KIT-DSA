#include <string>
#include <iostream>
using namespace std;

class ComplexNumber{
    private:
    int real;
    int imag;

    // default constructor
    public:
    ComplexNumber(){
        real = 0;
        imag = 0;
    }

    // parameterised constructor
    ComplexNumber(int real, int imag){
        this -> real = real;
        this -> imag = imag;
    }

    ComplexNumber operator+(const ComplexNumber &c){
        int newReal = this -> real + c.real;
        int newImag = this -> imag + c.imag;
        ComplexNumber temp;
        temp.real = newReal;
        temp.imag = newImag;
        return temp;
    }

    void display(){
        // a + bi
        cout << real << " + " << imag << "i" << endl;
    }

};

int main(){
    // 2 + 3i
    ComplexNumber c1(2, 3);
    // 3 + 4i
    ComplexNumber c2(3, 4);

    ComplexNumber c3;
    c3 = c1 + c2;

    c3.display();
}