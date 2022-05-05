class Solution {
public:
    int beautySum(string s) {
       int sumofdifferences=0;
        int n=s.length();
         map<char,int> freq;
        for(int i=0;i<n;i++)
       {
           freq.clear();
           for(int j=i;j<n;j++)
           {
               int maxi=INT_MIN,mini=INT_MAX;
               freq[s[j]]++;
               if(freq.size()==1||freq.size()==j-i+1)
               {
                   continue;
               }
               else
               {
                   for(auto each:freq)
                   {
                       if(each.second>maxi)
                       maxi=each.second;
                       if(each.second<mini)
                       mini=each.second;
                   }
                   sumofdifferences+=(maxi-mini);
               }
           }
       }
       return sumofdifferences;
    }
};