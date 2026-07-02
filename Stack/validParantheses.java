// leetcode 20
class Solution {
    public boolean isValid(String s) {
        int n = s.length();
        Stack<Character> st = new Stack<>();
        for(int i = 0; i < n; i++){
            char c = s.charAt(i);
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }else{
                if(st.size() == 0) return false;
                
                boolean case1 = c == ')' && st.peek() == '(';
                boolean case2 = c == '}' && st.peek() == '{';
                boolean case3 = c == ']' && st.peek() == '[';
                if(case1 || case2 || case3){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        if(st.size() == 0) return true;
        else return false;
    }
}