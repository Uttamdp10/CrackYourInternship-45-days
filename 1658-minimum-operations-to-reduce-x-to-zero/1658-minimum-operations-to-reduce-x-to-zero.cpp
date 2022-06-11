class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int sum=0;
		// Calculating Total sum of our given Array
        for(int i:nums)
            sum+=i;
		
		// Substracting X from our total sum to get a target sum for our sub-array
        sum=sum-x;
		// Basic Edge Cases 
        if(sum==0)
            return nums.size();
        if(sum<0)
            return -1;
        
        int low=0;int high=0;int cursum=0;
        int ans=-1;
		// Finding the length of Subarray whose sum = Target_Sum
        while(high<nums.size())
        {
            cursum+=nums[high];
                
            while(cursum>sum)
            {
                cursum-=nums[low++];
            }
                
            if(cursum==sum)
                ans=max(ans,high-low+1);
            high++;
        }
		
        if(ans==-1)
            return -1;
        return nums.size()-ans;
        
    }
};
