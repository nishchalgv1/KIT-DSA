// gfg problem
class Solution {
    void getAllPermutations(string& input, string& output, vector<string>& finalOutput){
        // base case
        if(input.length() == 0){
            finalOutput.push_back(output);
            return;
        }
        
        for(int i = 0; i < input.size(); i++){
            char curr_char = input[i];
            string new_input = input.substr(0, i) + input.substr(i + 1);
            string new_output = output + curr_char;
            getAllPermutations(new_input, new_output, finalOutput);
        }
    }
  public:
    vector<string> permutation(string s) {
        
        vector<string> finalOutput; // contains all permutations
        string output = "";
        getAllPermutations(s, output, finalOutput);
        sort(finalOutput.begin(), finalOutput.end());
        return finalOutput;
    }
};