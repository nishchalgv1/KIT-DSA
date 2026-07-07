#include <bits/stdc++.h>
using namespace std;

int sum(vector<int>& arr, int idx){
    // base case
    if(idx == arr.size()){
        return 0;
    }
    // recursive call or hypothesis
    int smallOutput = sum(arr, idx + 1); // pass the remaining array to recursion from idx 1

    return smallOutput + arr[idx];
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "sum: " << sum(arr, 0);
}