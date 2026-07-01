class Solution {
  
    public ArrayList<Integer> nextLargerElement(int[] arr) {
        
        // output array
        int n = arr.length;
        ArrayList<Integer> output = new ArrayList<>();
        Stack<Integer> st = new Stack<>();
        
        for(int i = n - 1; i >= 0; i--){
            int elem = arr[i];
            int top = st.peek();
            if(st.size() == 0){
                output.add(-1);
            }else if(st.size() > 0 && top > elem){
                output.add(top);
            }else if(st.size() > 0 && top <= elem){
                while(st.size() > 0 && top <= elem){
                    st.pop();
                }
                if(st.size() == 0){
                    output.add(-1);
                }else{
                    output.add(top);
                }
            }
            st.push(elem);
        }
        
        reverse(output);
        return output;
        
    }
}