class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        stack<pair<int, int>> st;
        vector<int> output;
        // nextgreaterElementToLeft
        for(int i = 0; i < n; i++){
            int elem = arr[i];
            if(st.size() == 0){
                output.push_back(i + 1);
            }else if(st.size() > 0 && st.top().first > elem){
                output.push_back(i - st.top().second);
            }else if(st.size() > 0 && st.top().first <= elem){
                while(st.size() > 0 && st.top().first <= elem){
                    st.pop();
                }
                if(st.size() == 0) output.push_back(i + 1);
                else output.push_back(i - st.top().second);
            }
            st.push({elem, i});
        }
        return output;
        
    }
};