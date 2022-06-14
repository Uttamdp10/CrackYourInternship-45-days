class Solution 
{
public:
    int maxScore(string s) 
    {
        
        int n = s.length();
        int maxSum = 0;
        int count1=0,count2=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                count1++;
            }
        }
																								
		for(int i=0;i<n-1;i++)   
        {
            if(s[i] == '0')  //  if we get 0 then increment count2
            {
                count2++;
            }
            else
            {
                count1--;  // if we get one decrement
            }
            maxSum = max(maxSum,(count1+count2)); // Checking for curmax at every iteration
        }
        return maxSum;
    }
};