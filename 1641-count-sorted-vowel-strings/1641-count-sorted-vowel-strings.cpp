class Solution {
public:
    int countVowelStrings(int n,int k=5) {
        if(k<=1 || n==1)
            return k;
        
        int ans=0;
        for(int i=0;i<k;i++)
            ans+=countVowelStrings(n-1,k-i);
        return ans;
    }
};