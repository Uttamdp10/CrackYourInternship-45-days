class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int dp[101][101]{};
        for(int i = 0; i < strs.size(); i++){
            int cnt_0 = count(strs[i]), cnt_1 = strs[i].size() - cnt_0;
            for(int m_quota = m; m_quota >= 0; m_quota--)
                for(int n_quota = n; n_quota >= 0; n_quota--)
                    if(cnt_0 <= m_quota and cnt_1 <= n_quota)
                        dp[m_quota][n_quota] = max(dp[m_quota][n_quota], dp[m_quota-cnt_0][n_quota-cnt_1] + 1);
        }
        return dp[m][n];
    }
    
    int count(string &s){
        int cnt_0{0};
        for(char c: s)
            cnt_0+= (c == '0');
        return cnt_0;
    }
};