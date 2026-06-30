// https://www.geeksforgeeks.org/problems/reverse-a-string/1

class Solution {
    public static String reverseString(String s) {
        // code here
        int n = s.length();
        Stack<Character> st = new Stack<>();
        
        // insert every character in the stack
        for(int i = 0; i < n; i++){
            char c = s.charAt(i);
            st.push(c);
        }
        
        String ans = "";
        while(!st.isEmpty()){
            ans += st.pop();
        }
        
        return ans;
    }
}