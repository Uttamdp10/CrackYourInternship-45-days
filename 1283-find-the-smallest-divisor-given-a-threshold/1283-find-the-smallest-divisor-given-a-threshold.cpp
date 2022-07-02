class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,r=1000000;
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
                int a,b;
            long long int sum=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]%mid==0)
                {
                    a=(nums[i]/mid);
                        sum += a;
                } else
                {
                    b=(nums[i]/mid)+1;
                        sum+=b;
                }
            }
            if(sum>threshold)
            {
                l=mid+1;
            } else
            {
              ans = mid;
                r=mid-1;
            }
        }
        return ans;
    }
};