class Solution {
public:
    int longestMountain(vector<int>& a) 
    {
        int maxlength = 0;
            
        if(a.size() == 0)  return 0;
            
            for(int i = 1; i < a.size()-1; i++)
            {
                    if(a[i] > a[i-1] && a[i] > a[i+1])
                    {      
                            int left = i-1;
                     
                            int right = i+1;
                            
                            while(left > 0 && a[left-1] < a[left] )
                                    left--;
                            
                            while(right < a.size()-1 && a[right+1] < a[right])
                                    right++;
                            
                            maxlength = max(maxlength, right - left+1);
                    }
            }
            
            return maxlength;
            
    }
};