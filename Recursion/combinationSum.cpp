// leetcode 40
class Solution {
    void getAllCombinations(vector<int>& candidates, int idx, int target, vector<int> output, vector<vector<int>>& finalOutput){
        // base case
        if(idx == candidates.size()){
            if(target == 0){
                finalOutput.push_back(output);
            }
            return;
        }

        if(candidates[idx] <= target){
            output.push_back(candidates[idx]);
            getAllCombinations(candidates, idx + 1, target - candidates[idx], output, finalOutput);
            output.pop_back();
        }
        int nextIdx = idx + 1;
        while(nextIdx < candidates.size() && candidates[nextIdx] == candidates[idx]){
            nextIdx++;
        }
        getAllCombinations(candidates, nextIdx, target, output, finalOutput);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> finalOutput;
        vector<int> output;
        sort(candidates.begin(), candidates.end());
        getAllCombinations(candidates, 0, target, output, finalOutput);
        return finalOutput;
    }
};