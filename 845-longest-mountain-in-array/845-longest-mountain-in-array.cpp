class Solution {
public:
    int longestMountain(vector<int>& a) 
    {
        int maxlength = 0;
            
        if(a.size() == 0)  return 0;
            
            for(int i = 1; i < a.size()-1; i++)
            {
                    if(a[i] > a[i-1] && a[i] > a[i+1])
                            //finding out the middle element or peak in an array/mountain.
                    {      
                            int left = i-1; //initialize left pointer towards left of peak 
                     
                            int right = i+1; // initialize right pointer towards right to peak.
                            
                            while(left > 0 && a[left-1] < a[left] )
                                    // if next left is smaller then current left move forward;
                                    left--;
                            
                            while(right < a.size()-1 && a[right+1] < a[right])
                                    // if next right is smaller then current right move forward
                                    right++;
                            
                            maxlength = max(maxlength, right - left+1);
                            //return the maximum length between two pointers right and left.
                    }
            }
            
            return maxlength;
            
    }
};