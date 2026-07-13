#include <queue>
#include <iostream>
using namespace std;

int main(){
    priority_queue<int> pq;
    // 100 90 95 120
    pq.push(100);
    pq.push(90);
    pq.push(95);
    pq.push(120);

    // check size
    cout << "size: " << pq.size() << endl;

    // getMax -- top()
    cout << "Max elem: " << pq.top() << endl;

    // print all elems in decreasing order
    cout << "Print elements: " << endl;
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
}

