class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        
        vector<int> dp(nums.size(),INT_MIN);
        dp[0] = nums[0];  //base case for index 0
        
        priority_queue <pair<int,int>> pq;
        pq.push({dp[0],0});   //push the the value of dp[i] and index also to later check if it falls in the range
        
        for(int i=1;i<nums.size();i++){
            while(pq.top().second<i-k) //popping untill max element in the window is not found.
                pq.pop();
            dp[i] = pq.top().first+nums[i];
            pq.push({dp[i],i});
        }
        return dp[dp.size()-1];
    }
};
