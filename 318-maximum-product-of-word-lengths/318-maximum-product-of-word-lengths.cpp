class Solution {
public:
    bool check(string a,string b)
    {
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(a[i]==b[j])
                    return false;
            }
        }
        return true;
    }
    int maxProduct(vector<string>& words) {
        int ma=0;
        for(int i=0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                 if(words[i].size() * words[j].size() <= ma) continue;
                if(check(words[i],words[j]))
                {
                    int l=words[i].size()*words[j].size();
                    ma=max(ma,l);
                }
            }
        }
        return ma;
    }
};
