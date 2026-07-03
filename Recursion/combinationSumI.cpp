// leetcode 39
class Solution {
    void getCombinations(vector<int>& candidates, int idx, int target, vector<int>& output, vector<vector<int>>& finalOutput){
        // base case
        if(idx == candidates.size()){
            if(target == 0){
                finalOutput.push_back(output);
            }
            return;
        }

        // include the curr elem if it is <= target
        if(candidates[idx] <= target){
            output.push_back(candidates[idx]);
            getCombinations(candidates, idx, target - candidates[idx], output, finalOutput);
            output.pop_back();
        }
        getCombinations(candidates, idx + 1, target, output, finalOutput);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> finalOutput;
        vector<int> output;

        getCombinations(candidates, 0, target, output, finalOutput);

        return finalOutput;
    }
};