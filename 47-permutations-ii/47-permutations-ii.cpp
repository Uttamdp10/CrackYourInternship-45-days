class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp=nums;
        do{
            next_permutation(temp.begin(),temp.end());
            ans.push_back(temp);
        }while(temp!=nums);
        return ans;
    }
};


