// https://www.geeksforgeeks.org/problems/max-rectangle/1
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
    
    int maxAreaOfHistogram(vector<int> &heights) {
        int n = heights.size();
        
        // find the next smaller element in left for every elem in the given array
        vector<int> nsl = nextSmallerLeft(heights);
        vector<int> nsr = nextSmallerRight(heights);
        
        
        // find max_area
        int max_area = INT_MIN;
        for(int i = 0; i < n; i++){
            int width = nsr[i] - nsl[i] - 1;
            int height = heights[i];
            int area = width * height;
            if(area > max_area){
                max_area = area;
            }
        }
        return max_area;
    
       
    }
  public:
    int maxArea(vector<vector<int>> &matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        vector<int> heights(cols);
        
        // store the first row in heights array
        for(int j = 0; j < cols; j++){
            heights[j] = matrix[0][j];
        }
        
        // calculate the maxArea for the first row
        int max_area = maxAreaOfHistogram(heights);
        
        for(int i = 1; i < rows; i++){
            for(int j = 0; j < cols; j++){
                int elem = matrix[i][j];
                if(elem == 0) heights[j] = 0;
                else heights[j] += matrix[i][j];
            }
            int curr_area = maxAreaOfHistogram(heights);
            max_area = max(max_area, curr_area);
        }
        
        return max_area;
        
    }
};