class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
    string ans = "";
            int n = str.size();
            sort(str.begin(),str.end());
                    string first = str[0];
            string last = str[n-1];
            
            for(int i = 0; i < first.size(); i++)
            {
                    if(first[i] == last[i])
                            ans += first[i];
            else return ans;
            }
            
            return ans;
    }
};