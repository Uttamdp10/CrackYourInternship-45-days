class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        //Using a Priority Queue to store pair
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0 ; i <nums.size(); i++){
            pq.push({nums[i], i});
            if(pq.size()>k){
                pq.pop();
            }
        }
        // Store the k elements 
        vector<pair<int, int>> ans;
        while(!pq.empty()){
            auto x = pq.top();
            pq.pop();
            ans.push_back({x.second , x.first});
        }
        
        //Sort k element based on original index
        sort(ans.begin(), ans.end());
        
        //Return the ans
        vector<int> finalAns;
        for(auto x : ans){
            finalAns.push_back(x.second);
        }
        return finalAns;
    }
};
