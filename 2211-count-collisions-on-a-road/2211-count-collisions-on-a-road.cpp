class Solution {
public:
    int countCollisions(string s) {
        stack<char> st; // creating a stack
        int n = s.size();
        if(n == 1)return 0; // edge case !
        st.push(s[0]); // Push the very first element in stack 
        int ans = 0;
        for(int i=1; i<n; i++)
        {
            if(!st.empty() && st.top() == 'R' && s[i] == 'L') // First case 
            {
                ans += 2;
                st.pop();   // remove the last element from the stack because they have collide 
                st.push('S'); // after collide the car become stationary so, push "S"
            }
            else if(!st.empty() && st.top() == 'R' && s[i] == 'S') // second case
            {
                ans += 1;
                st.pop();   // same here 
                st.push('S');
            }
            else if(!st.empty() && st.top() == 'S' && s[i] == 'L') // third case 
                ans += 1; 
            else
                st.push(s[i]); // if no condition is matched push the current element;
        } 
        // handling 4th case 
        while(!st.empty() && st.top() == 'R') // remove the leading R's
            st.pop();
        while(!st.empty()) // count the remaing R's
        {
            if(st.top() == 'R')ans++;
            st.pop();
        }
        // please dry  run this case of your own for better understand
        // S S R S S R L L R S L L R S R S S R L R R R R L L R R L S S R R
        
        
        return ans;
    }
};