class Solution {
public:
       string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        sort(ranks.begin(),ranks.end());
        
         vector<int> arr(4,0);
        
        int  m = 1,ans=0,ans2 = 0;
        
        for(int i = 1;i<5;i++){
           while(ranks[i]==ranks[i-1] && i<5){
               m++;
               i++;
           }
            ans = max(m,ans);
            m = 1;
        }
        
        
        for(int i = 0;i<5;i++ ){
            int n = suits[i] - 'a';
            arr[n]++; 
            ans2 = max(ans2,arr[n]);
        }
        
        
        if(ans2 == 5){
            return "Flush";
        }
        
        if(ans > 2){
            return "Three of a Kind";
        }
        
        if(ans == 2){
            return "Pair";
        }
        
        return "High Card";
    }   
    
    
};