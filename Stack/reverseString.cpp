// gfg
// https://www.geeksforgeeks.org/problems/reverse-a-string/1
class Solution {
  public:
    string reverseString(string& s) {
        int n = s.length();
        // stack of characters
        stack<char> st;
        
        // iterate on the string s and insert every character in the stack
        for(int i = 0; i < n; i++){
            char c = s[i];
            st.push(c);
        }
        
        string ans = "";
        
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        return ans;
        
    }
};
