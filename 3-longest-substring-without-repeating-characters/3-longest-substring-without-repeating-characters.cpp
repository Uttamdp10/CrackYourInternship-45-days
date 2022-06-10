class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> freqMap;
        
        int n = s.length();
        
        int L = 0;
        int R = 0;
        
        int ans = 0;
        
        while(R < n) {
            char right = s[R++];
            freqMap[right]++;
            
            while(freqMap[right] > 1) {
                char left = s[L++];
                freqMap[left]--;            
            }
            
            ans = max(ans, R - L);
        }
        
        return ans;
    }
};