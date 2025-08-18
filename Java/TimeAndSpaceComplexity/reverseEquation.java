// User function Template for Java
class Solution {

    String reverseEqn(String s) {
        // your code here
        Stack<String> stk = new Stack();
        String reset = "";
        
        for(int i=0;i<s.length();i++){
            if( s.charAt(i) == '+' || s.charAt(i) == '-' ||
              s.charAt(i) == '/' || s.charAt(i) == '*'){
                stk.push(reset);
                stk.push(String.valueOf(s.charAt(i)));
                reset = "";
            }else{
               reset += s.charAt(i);
            }
        }
        
        stk.push(reset);
        String ans = "";
        while(!stk.empty()){
           ans += stk.pop();
        }
        
        return ans;
       
    }
}

