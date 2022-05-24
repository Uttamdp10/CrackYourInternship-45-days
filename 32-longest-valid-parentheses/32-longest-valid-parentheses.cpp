class Solution {
public:
    int longestValidParentheses(string s) 
    {
        stack<int> stk;
        stk.push(-1);   
        int maxlength = 0;
        for(int i = 0; i < s.size(); i++)
        {
             int t = stk.top();
             
                // t != -1 checks the condition that stack is empty or not and the index i and top of stack matches a valid paranthesis then pop out.
                
                if(t != -1 && s[i] == ')' && s[t] == '(')
                {
                        stk.pop();
                        // maxlength is calculated from the top to the index up to which the condition is satisfied for valid paranthesis i.e ().
                        maxlength = max(maxlength, i-stk.top());
                }      
                else
                        stk.push(i);
        }
            return maxlength;
    }
        
        
};