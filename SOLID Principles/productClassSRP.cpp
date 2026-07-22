#include <iostream>
#include <string>
using namespace std;

class Product{
    string name;
    int price;

    public:
    Product(string name, int price){
        this -> name = name;
        this -> price = price;
    }

    void addProductToCart(){
        cout << "Product added to cart" << endl;
    }

    void getProductPrice(){
        cout << "Product Price is: " << price << endl;
    }

    void makePayment(){
        cout << "Paying the amount Rs " << price << " for " << name << endl;
    }
};

int main(){
    Product p("Laptop", 50000);
    p.addProductToCart();
    p.getProductPrice();
    p.makePayment();
}