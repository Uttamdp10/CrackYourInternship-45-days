class Solution {
public:
    int minFlips(string str) {
        
        int n = str.size();
        
        str += str;    // concatenate the string with itself instead of moving one element from start to end
        
        string target_1 = "";  // it may be like "010101010101" alternating string
         
        string target_2 = "";  // it may be like "101010101010" alternating string
        
        // fill the target_1 and target_2
        
        for(int i = 0; i < str.size(); i++)
        {
            if(i % 2 == 0)
            {
                target_1 += '0';
                
                target_2 += '1';
            }
            else
            {
                target_1 += '1';
                
                target_2 += '0';
            }
        }
        
        int diff_1 = 0;   // will store the no of different characters in window from target_1
        
        int diff_2 = 0;   // will store the no of different characters in window from target_2
        
        int mini = INT_MAX;
        
        // apply sliding window, window length will be n
        
        for(int i = 0; i < str.size(); i++)
        {
            if(i < n)
            {
                if(str[i] != target_1[i])
                {
                    diff_1++;
                }
                
                if(str[i] != target_2[i])
                {
                    diff_2++;
                }
            }
            else
            {
                // update our result
                
                mini = min({mini, diff_1, diff_2});
                
                // removing one character from window from start
                
                if(str[i - n] != target_1[i - n])
                {
                    diff_1--;
                }
                
                if(str[i - n] != target_2[i - n])
                {
                    diff_2--;
                }
                
                // adding one character to window at end
                
                if(str[i] != target_1[i])
                {
                    diff_1++;
                }
                
                if(str[i] != target_2[i])
                {
                    diff_2++;
                }
            }
        }
        
        mini = min({mini, diff_1, diff_2});
        
        return mini;
    }
};