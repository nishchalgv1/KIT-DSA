#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue{
    vector<int> heap;

    // default constructor
    public:
    PriorityQueue(){}

    int getSize(){
        return heap.size();
    }

    bool isEmpty(){
        return heap.size() == 0;
    }

    int getMin(){
        // check if pq is empty, return -1
        if(isEmpty()){
            return -1;
        }
        return heap[0]; // min elem is present at idx 0 in MinHeap
    }

    void insert(int elem){
        // insert the element in last 
        heap.push_back(elem);
        // upheapify
        int childIdx = heap.size() - 1;
        while(childIdx > 0){
            int parentIdx = (childIdx - 1) / 2;
            // compare newly added element with parent
            if(heap[childIdx] < heap[parentIdx]){
                swap(heap[childIdx], heap[parentIdx]);
            }else{
                break;
            }
            childIdx = parentIdx;
        }
    }

    int removeMin(){
        if(isEmpty()) return -1;

        // store the last element
        int ans = heap[0];
        heap[0] = heap[heap.size() - 1];
        // remove the last element
        heap.pop_back();

        int parentIdx = 0;
        int leftChildIdx = (2 * parentIdx) + 1;
        int rightChildIdx = (2 * parentIdx) + 2;

        while(leftChildIdx < heap.size()){
            int minIdx = parentIdx;
            if(heap[leftChildIdx] < heap[minIdx]){
                minIdx = leftChildIdx;
            }

            if(rightChildIdx < heap.size() && heap[rightChildIdx] < heap[minIdx]){
                minIdx = rightChildIdx;
            }

            if(minIdx == parentIdx) break;

            swap(heap[minIdx], heap[parentIdx]);
            parentIdx = minIdx;
            leftChildIdx = (2 * parentIdx) + 1;
            rightChildIdx = (2 * parentIdx) + 2;
        }
        return ans;
    }
};

int main(){
    PriorityQueue pq;
    int n;
    cout << "Enter n: " << endl;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int elem;
        cout << "Enter elem: " << endl;
        cin >> elem;
        pq.insert(elem);
    }

    cout << "Size of Priority Queue before removing any elem: " << pq.getSize() << endl;
    cout << "Min elem of the Priority Queue: " << pq.getMin() << endl;
    cout << "Is Priority Queue empty ? " << pq.isEmpty() << endl;

    pq.removeMin();
    cout << "Size after removing min:  " << pq.getSize() << endl;

    pq.removeMin();
    cout << "Size after removing two elem: " << pq.getSize() << endl;

    // print all element of the Min Heap in sorted order

}