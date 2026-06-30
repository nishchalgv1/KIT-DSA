#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    
    int n;
    cout << "Enter n: " << endl;
    cin >> n; // take n input from the user

    while(n--){
        int elem;
        cout << "Enter n elements one by one: " << endl;
        cin >> elem;
        st.push(elem);
    }
        // top() - returns top elem
        // pop() - removes top elem

    // print all elements of the stack
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    cout << "size of the stack now is: " << st.size() << endl;

    cout << "Is stack empty now?: " << st.empty() << endl;
    // 1 - true
    // 0 - false

}