class Solution {
public:
    int missingNumber(vector<int>& nums) {
		int n = nums.size();
		int temp = n;
		for(int i = 0; i < n; i++) {
			temp ^= i ^ nums[i];
		}
		return temp;
	}
};