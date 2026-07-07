#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char dest){
    // base case
    if(n == 1){
        cout << "Move disk " << n << " from " << source << " to " << dest << endl;
        return;
    }

    // move n - 1 disks from source to helper using dest
    towerOfHanoi(n - 1, source, dest, helper);

    cout << "Move disk " << n << " from " << source << " to " << dest << endl;

    // move n - 1 disks from helper to dest using source
    towerOfHanoi(n - 1, helper, source, dest);
}

int main(){
    int n;
    cout << "Enter no of disks: " << endl;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
}