class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> minheap;
        int i=0;
        while(i<nums.size()){
            
            minheap.push(nums[i++]);
            
            if(minheap.size()>k){
                minheap.pop();
            }
        }
   return minheap.top();
    }
};