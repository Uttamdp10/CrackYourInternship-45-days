class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    // Optimal Solution Time O(N) & Auxiliary Space O(1)
    int len=nums.size();
    for(int i=1;i<len;i++){
        nums[i]+=nums[i-1];
    }
        return nums;  
    }
};