package Stack;
import java.util.Stack;

public class Main {
    public static void main(String[] args){
        Stack<Integer> st = new Stack<>();
        // Stack<Character> charSt = new Stack<>();
        // Stack<Boolean> boolSt = new Stack<>();
        // Stack<String> strSt = new Stack<>();
        // Stack<Double> doubleSt = new Stack<>();

        // insert some elements
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        
        int top_elem = st.peek();
        System.out.println("Top element is: " + top_elem);

        int removed_elem = st.pop();
        System.out.println("Removed elem is: " + removed_elem);

        int size = st.size();
        System.out.println("Size is: " + size);

        System.out.println("Is Stack Empty ?: " + st.isEmpty());

        while(st.size() > 0){
            int popped = st.pop();
            System.out.println("Removed elem is: " + popped);
        }
        System.out.println("Is stack empty now?: " + st.isEmpty());
    }
}
