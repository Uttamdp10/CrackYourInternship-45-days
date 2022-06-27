class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
          
            int s = n.length();
            
            for(int i = 0; i < s; i++)
            {
                  ans = max(ans, n[i] - '0');
            }
            return ans;
    }
};