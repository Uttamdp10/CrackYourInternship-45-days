class Solution {
public:
    int minFlips(string s) {
        
        int n=s.length();
        int even0=0, even1=0, odd0=0, odd1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(i&1) odd1++;
                else even1++;
            }
            else
            {
                if(i&1) odd0++;
                else even0++;
            }
        }
        
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ans=min(ans, min(n-(even1+odd0), n-(odd1+even0)));
            //rotate and update counts
            //first index is even
            if(s[i]=='1')
            {
                even1--;
                swap(even1,odd1);
                swap(even0,odd0);
                if(n&1) even1++;
                else odd1++;
            }
            else
            {
                even0--;
                swap(even1,odd1);
                swap(even0,odd0);
                if(n&1) even0++;
                else odd0++;
            }
        }
        
        
        return ans;
    }
};