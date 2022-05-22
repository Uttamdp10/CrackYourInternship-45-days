class Solution {
public:
    int percentageLetter(string s, char letter)
    {
        int n = s.size();
        int ans = 0, val =0;
        
         for(int i = 0; i < n; i++)
         {
                 if(s[i] == letter)
                         ans++;
                 
                 
         }
            ans = ans * 100;
            return ans/n;
          
    }
};