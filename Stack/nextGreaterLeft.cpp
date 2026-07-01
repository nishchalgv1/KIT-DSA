// https://www.geeksforgeeks.org/problems/previous-greater-element/1
class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> output;
        for(int i = 0; i < n; i++){
            int elem = arr[i];
            if(st.size() == 0){
                output.push_back(-1);
            }else if(st.size() > 0 && st.top() > elem){
                output.push_back(st.top());
            }else if(st.size() > 0 && st.top() <= elem){
                while(st.size() > 0 && st.top() <= elem){
                    st.pop();
                }
                if(st.size() == 0) output.push_back(-1);
                else output.push_back(st.top());
            }
            st.push(elem);
        }
        return output;
        
    }
};