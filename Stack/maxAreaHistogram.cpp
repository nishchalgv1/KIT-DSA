class Solution {
 
    vector<int> nextSmallerLeft(vector<int>& arr){
        int n = arr.size();
        vector<int> output;
        stack<pair<int, int>> st;
        for(int i = 0; i < n; i++){
            int elem = arr[i];
            if(st.size() == 0) output.push_back(-1);
            else if(st.size() > 0 && st.top().first < elem) {
                output.push_back(st.top().second);
            }else if(st.size() > 0 && st.top().first >= elem){
                while(st.size() > 0 && st.top().first >= elem){
                    st.pop();
                }
                if(st.size() == 0){
                    output.push_back(-1);
                }else{
                    output.push_back(st.top().second);
                }
            }
            st.push({elem, i});
        }
        return output;
    }
    
    vector<int> nextSmallerRight(vector<int>& arr){
        vector<int> output;
        int n = arr.size();
        stack<pair<int, int>> st;
        for(int i = n - 1; i >= 0; i--){
            int elem = arr[i];
            if(st.size() == 0){
                output.push_back(n);
            }else if(st.size() > 0 && st.top().first < elem){
                output.push_back(st.top().second);
            }else if(st.size() > 0 && st.top().first >= elem){
                while(st.size() > 0 && st.top().first >= elem){
                    st.pop();
                }
                if(st.size() == 0) output.push_back(n);
                else output.push_back(st.top().second);
            }
            st.push({elem, i});
        }
        reverse(output.begin(), output.end());
        return output;
    }
    
  public:
    int getMaxArea(vector<int> &arr) {
        int n = arr.size();
        
        // find the next smaller element in left for every elem in the given array
        vector<int> nsl = nextSmallerLeft(arr);
        vector<int> nsr = nextSmallerRight(arr);

         // find max_area
        int max_area = INT_MIN;
        for(int i = 0; i < n; i++){
            int width = nsr[i] - nsl[i] - 1;
            int height = arr[i];
            int area = width * height;
            if(area > max_area){
                max_area = area;
            }
        }
        return max_area;
        
        // vector<int> width(n);
        // // fill the width array
        // for(int i = 0; i < n; i++){
        //     width[i] = nsr[i] - nsl[i] - 1;
        // }
        
        // vector<int> area(n);
        // for(int i = 0; i < n; i++){
        //     area[i] = arr[i] * width[i];
        // }
        
        // // find out the max area
        // int max_area = INT_MIN; 
        // for(int i = 0; i < n; i++){
        //     int curr_area = area[i];
        //     if(curr_area > max_area){
        //         max_area = curr_area;
        //     }
        // }
        
        // return max_area;
    }
};
