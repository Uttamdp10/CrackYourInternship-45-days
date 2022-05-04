class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        unordered_map<int, int> mp;
        int count=0;
        
        for(auto it:nums)
        {
		
            int y=k-it;
            if(mp.find(y) != mp.end() && mp[y] > 0) //find k-it in map if it exists we increase the count
            {
                count++;
				//decrease the frequency of y and it
                mp[y]--; 
                mp[it]--;
            }
            mp[it]++; //store the frequency of it
            
        }
        
        return count;
    }
};

