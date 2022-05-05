class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        
        for(int i=0;i<s.length();i++)
        {
            string str="";
            int arr[26]={0};
            for(int j=i;j<s.length();j++)
            {
                str+=s[j];
                arr[s[j]-'a']++;

                int maxi=0;int mini=INT_MAX;
                for(int i=0;i<26;i++)
                {
                    if(arr[i]!=0)
                    {
                    maxi=max(maxi,arr[i]);
                    mini=min(mini,arr[i]);
                
                    }
                }
                if(mini==INT_MAX)
                    mini=0;
                sum+=(maxi-mini);
                
            }
        }
        return sum;
    }
};