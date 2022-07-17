class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums)
    {
           unordered_map<int,int>mp;
           for(auto i : nums)  mp[i]++;
         int c1 = 0, c2 = 0;
        for(auto m: mp){
            c1 += m.second/2;
            c2 += m.second%2;
        }
        return {c1, c2};   
            
    }
};