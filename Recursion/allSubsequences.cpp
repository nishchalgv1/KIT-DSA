class Solution {
  public:
    void allSubsequences(string &s, int idx, string output, vector<string> &finalOutput){
        // base case
        if(idx == s.length()){
            // output contains one valid subset
            finalOutput.push_back(output);
            return;
        }
        
        
        // not include
        allSubsequences(s, idx + 1, output, finalOutput);
        
        // include
        allSubsequences(s, idx + 1, output + s[idx], finalOutput);
    }
    
    vector<string> powerSet(string &s) {
        int n = s.length();
        
        vector<string> finalOutput;
        string output = "";
        
        allSubsequences(s, 0, output, finalOutput);
        
        return finalOutput;
        
    }
};