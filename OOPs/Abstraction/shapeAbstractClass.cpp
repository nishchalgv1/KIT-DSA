#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void area() = 0;
};

class Circle : public Shape{
    int radius;
    public:
    Circle(int radius){
        this -> radius = radius;
    }

    void area(){
        cout << "Area of circle is : " << 3.14 * radius * radius << endl;
    }
};

class Square : public Shape{
    int a;
    public:
    Square(int a){
        this -> a = a;
    }

    void area(){
        cout << "Area of square is: " << a * a << endl;
    }
};

class Rectangle : public Shape{
    int length;
    int width;

    public: 
    Rectangle(int length, int width){
        this -> length = length;
        this -> width = width;
    }

    void area(){
        cout << "Area of rectangle is: " << length * width << endl;
    }
};

int main(){
    Rectangle r(4, 3);
    Circle c(2);
    Square s(4);

    c.area();
    r.area();
    s.area();
}

