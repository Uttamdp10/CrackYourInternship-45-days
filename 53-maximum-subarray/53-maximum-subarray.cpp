class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int MAX = INT_MIN;
        int curr_sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            curr_sum += nums[i];
            MAX = max(curr_sum, MAX);
            if(curr_sum < 0) curr_sum = 0;
        }
        return MAX;
    }
};