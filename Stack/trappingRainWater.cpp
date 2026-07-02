// leetcode 42
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax(n, 0), rightMax(n, 0);
        leftMax[0] = height[0];
        // building the rest of the array
        for(int i = 1; i < n; i++){
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }
        
        rightMax[n - 1] = height[n - 1];
        for(int i = n - 2; i >= 0; i--){
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        int water_trapped = 0;
        for(int i = 0; i < n; i++){
            water_trapped += min(leftMax[i], rightMax[i]) - height[i];
        }
        return water_trapped;
        // Time - O 3( => O(N)
        // Space - O 2(N) => O(N)
    }
};