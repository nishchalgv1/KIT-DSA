#include <iostream>
using namespace std;

class Calculator{
    public:
    int add(int a, int b){
        return a + b;
    }

    int add(int a, int b, int c){
        return a + b + c;
    }

    double add(double a, double b){
        return a + b;
    }

};

int main(){
    Calculator c;
    int ans1 = c.add(5, 10);
    int ans2 = c.add(10, 20, 30);
    int ans3 = c.add(2.54, 3.05);
    cout << ans1 << " " << ans2 << " " << ans3 << endl;
}