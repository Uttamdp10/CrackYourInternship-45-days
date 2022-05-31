class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>S,T;
        int n= s.size(), m = t.size();
        
        for(int i=0;i<n;i++){
            if(s[i] == '#' && !S.empty())
                S.pop_back(); 
            
            else if(s[i]!='#')
                S.push_back(s[i]);
        }
       
        
        for(int i=0;i<m;i++){
            if(t[i] == '#' && !T.empty())
                T.pop_back();
            else if(t[i]!='#')
               T.push_back(t[i]);    
        }
        
        
        if(S == T)
            return true;
        else
            return false;
    }
};