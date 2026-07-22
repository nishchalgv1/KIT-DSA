#include <iostream>
using namespace std;

// Payment behaves as in Interface for every payment method
class Payment{
    public:
    virtual void pay(int amount) = 0;
};

class UPI : public Payment{
    public:
    void pay(int amount){
        cout << "Amount of Rs" << amount << " is processing using UPI" << endl;
    }
};

class CreditCard : public Payment{
    public:
    void pay(int amount){
        cout << "Amount of Rs" << amount << " is processing using CreditCard" << endl;
    }
};

class NetBanking : public Payment{
    public: 
    void pay(int amount){
        cout << "Amount of Rs" << amount << " is processing usind NetBanking" << endl;
    }
};

class Wallet : public Payment{
    public:
    void pay(int amount){
        cout << "Amount of Rs" << amount << " is processing using Wallet"  << endl;
    }
};

int main(){
    UPI upi;
    CreditCard creditCard;

    upi.pay(500);
    creditCard.pay(1000);
}