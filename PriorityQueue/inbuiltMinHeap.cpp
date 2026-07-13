#include <queue>
#include <iostream>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    // 100 90 95 120
    pq.push(100);
    pq.push(90);
    pq.push(95);
    pq.push(120);
    // min = 90
    // 90 95 100 120

    // check size
    cout << "size: " << pq.size() << endl;

    // getMax -- top()
    cout << "Min elem: " << pq.top() << endl;

    // print all elems in increasing order
    cout << "Print elements: " << endl;
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
}

