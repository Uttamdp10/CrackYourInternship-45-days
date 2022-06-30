class Solution {
public:
    int minMoves2(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    
    int mid=(nums.size()-1)/2;
    int add=0;
    for(int k : nums){
        add+=(abs(nums[mid]-k));
    }
    return add;
}
};