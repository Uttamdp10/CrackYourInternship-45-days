class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> numsWithIndex(n);
        vector<bool> taken(n, false);
        vector<int> result;
        
		//Step 1
        for(int i=0;i<n;i++) numsWithIndex[i] = {nums[i], i};
		
		//Step 2
        sort(numsWithIndex.begin(), numsWithIndex.end(), greater<pair<int, int>>());
        
		//Step 3
        for(int i=0;i<k;i++) taken[numsWithIndex[i].second] = true;
        
		//Step 4
        for(int i=0;i<n;i++) {
            if(taken[i]) result.push_back(nums[i]);
        }
        return result;
    }
};