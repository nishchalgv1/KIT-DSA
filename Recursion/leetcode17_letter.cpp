class Solution {
    vector<string> mappings = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void getAllCombinations(string& digits, int idx, string output, vector<string>& finalOutput){
        // base case
        if(idx == digits.length()){
            finalOutput.push_back(output);
            return;
        }

        //mappings
        string letters = mappings[digits[idx] - '0'];

        for(int i = 0; i < letters.length(); i++){
            char curr = letters[i];
            getAllCombinations(digits, idx + 1, output + curr, finalOutput);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> finalOutput;
        string output = "";
        getAllCombinations(digits, 0, output, finalOutput);
        return finalOutput;
    }
};