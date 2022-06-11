class Solution {
public:
    long long minimumRemoval(vector<int>& beans) 
    {
        long long n=beans.size();
        long long ans=LONG_MIN,sum=0;
        sort(beans.begin(),beans.end());
        for(int i=0;i<n;i++)
        {
            sum+=beans[i];
            ans=max(ans,beans[i]*(n-i));
        }
        return sum-ans;
        
    }
};