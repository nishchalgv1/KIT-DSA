// https://www.geeksforgeeks.org/problems/immediate-smaller-element1142/1
class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        int n = arr.size();
        vector<int> output;
        stack<int> st;
        
        for(int i = n - 1; i >= 0; i--){
            int elem = arr[i];
            if(st.size() == 0) output.push_back(-1);
            else if(st.size() > 0 && st.top() < elem) output.push_back(st.top());
            else if(st.size() > 0 && st.top() >= elem){
                while(st.size() > 0 && st.top() >= elem){
                    st.pop();
                }
                if(st.size() == 0) output.push_back(-1);
                else output.push_back(st.top());
            }
            st.push(elem);
        }
        reverse(output.begin(), output.end());
        return output;
    }
};