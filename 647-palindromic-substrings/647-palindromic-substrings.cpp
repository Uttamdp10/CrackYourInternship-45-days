class Solution {
public:
    
    int countSubstrings(string s)
    {
       int n = s.size();
       int ans = 0;
       
            for(int i = 0; i < n; i++)
            {
         int x = i-1;
                 int y = i+1;
                 ans++;
                    
                    while(x >= 0 && y < n && s[x] == s[y])
                    {
                    ans++;
                    x--;
                    y++;
                    }
                     x = i;
                     y = i+1;
                    
                    while(x >= 0 && y < n && s[y] == s[x])
                    {
                            ans++;
                            x--;
                            y++;
                            
                    }
            }
            return ans;
            
    }
};