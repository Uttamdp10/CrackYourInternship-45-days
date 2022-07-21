class Solution {
public:
      
    
    vector<int> corpFlightBookings(vector<vector<int>>& b , int n) {
        
   //      sort(b.begin(),b.end(),compare);
        
        vector<int> res(n , 0);
        
         for(int i=0;i<b.size();i++)
         {
             int first_idx=b[i][0]-1;
             int last_idx=b[i][1]-1;
             
             int value=b[i][2];
             
             res[first_idx]+=value;
             
             // now this value will be valid till last_idx 
             
             // not valid from last_idx+1
             
             if((last_idx+1)<n)
             {
                 res[last_idx+1]-=value;
             }
         }
        
        for(int i=1;i<n;i++)
        {
            res[i]+=res[i-1];
        } 
        
        return res;
        
    
    }
};