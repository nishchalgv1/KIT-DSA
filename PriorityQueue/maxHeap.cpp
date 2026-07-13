#include <vector>
#include <iostream>
using namespace std;

class PriorityQueue{
    vector<int> heap;

    public:
    PriorityQueue(){}

    int getSize(){
        return heap.size();
    }

    bool isEmpty(){
        return heap.size() == 0;
    }

    int getMax(){
        if(isEmpty()) return -1;

        return heap[0];
    }

    void insert(int elem){
        heap.push_back(elem);

        int childIdx = heap.size() - 1;
        while(childIdx > 0){
            int parentIdx = (childIdx - 1) / 2;
            if(heap[childIdx] > heap[parentIdx]){
                swap(heap[childIdx], heap[parentIdx]);
            }else{
                break;
            }
            childIdx = parentIdx;
        }
    }

    int removeMax(){
        if(isEmpty()) return -1;

        int ans = heap[0];
        heap[0] = heap[heap.size() - 1];
        heap.pop_back();

        // down heapify
        int parentIdx = 0;
        int leftChildIdx = (2 * parentIdx) + 1;
        int rightChildIdx = (2 * parentIdx) + 2;

        while(leftChildIdx < heap.size()){
            int maxIdx = parentIdx;
            if(heap[leftChildIdx] > heap[maxIdx]){
                maxIdx = leftChildIdx;
            }

            if(rightChildIdx < heap.size() && heap[rightChildIdx] > heap[maxIdx]){
                maxIdx = rightChildIdx;
            }

            if(maxIdx == parentIdx){
                break;
            }
            swap(heap[parentIdx], heap[maxIdx]);
            parentIdx = maxIdx;
            leftChildIdx = (2 * parentIdx) + 1;
            rightChildIdx = (2 * parentIdx) + 2;
        }
        return ans;
    }
};

int main(){

}