#include <iostream>
#include <string>
using namespace std;


class Payment{
    public: 
    int amount;
    virtual void pay(int amount) = 0;
};

class UPI: public Payment{
    public: 
    void pay(int amount) override{
        cout << "Paying Rs " << amount << " using UPI" << endl;
    }
};

class CreditCard: public Payment{
    public: 
    void pay(int amount) override{
        cout << "Paying Rs " << amount << " using CrediCard" << endl;
    }
};

class ShoppingCart{
    public:
    void checkout(Payment* p, int amount){
        p -> pay(amount);
    }
};

int main(){
    ShoppingCart cart;

    UPI upi;
    CreditCard creditcard;

    cart.checkout(&upi, 10000);
    cart.checkout(&creditcard, 50000);

}