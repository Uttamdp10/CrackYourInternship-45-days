class Solution {
public:
    bool find132pattern(vector<int>& nums) 
    {
        // we wre going to use stack here for solving this problem
        // basically we need 3 values right ? and all that threes are follwing a order
        // so just need to find the 3 values 
        // in stack we are going to save previous value and the whole stack min value 
        // and we will compare these values with the current value according to the need of question
        // means if our current value is between betweeen the previos and min then return true else false
        
        // creating the stack
        stack<pair<int,int>> st;           // (previos,min)
        int mn = INT_MAX;                  // it will storing the mn value
        
        // iterating over the whole given array
        for(int i=0;i<nums.size();i++)
        {
            // just finding the min value if our stack is not empty
            if(!st.empty())
                mn = min(mn, st.top().first);
            
            // just popping all the greater value from the current 
            // because we need mid value between the previous and min
            while(!st.empty() && nums[i]>st.top().first) 
                st.pop();
            
            // now cheking our condition nums[i] < nums[k] < nums[j] that is there pattern avaliable or not
            if((!st.empty()) && (st.top().second < nums[i]) && (nums[i] < st.top().first)) 
                return true;
            
            // after each iteration just pushing the values with mn into our stack
            st.push({nums[i],mn});
        }
        return false;
    }
};