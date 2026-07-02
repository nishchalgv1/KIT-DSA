// leetcode 78
class Solution {
public:
    void allSubsets(vector<int>& nums, int idx, vector<int> output, vector<vector<int>>& finalOutput){
        // base case
        if(idx == nums.size()){
            finalOutput.push_back(output);
            return;
        }

        // include the curr elem at idx
        output.push_back(nums[idx]);
        allSubsets(nums, idx + 1, output, finalOutput);

        // do not include the curr eleme
        output.pop_back();
        allSubsets(nums, idx + 1, output, finalOutput);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> finalOutput;
        vector<int> output;
        allSubsets(nums, 0, output, finalOutput);
        return finalOutput;
    }
};