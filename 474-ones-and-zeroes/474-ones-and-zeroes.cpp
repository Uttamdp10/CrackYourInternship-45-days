class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) 
    {
        int dp[101][101]{};
        for(int i = 0; i < strs.size(); i++)
        {
            int cnt_0 = count(strs[i]), cnt_1 = strs[i].size() - cnt_0;
            for(int m_q = m; m_q >= 0; m_q--)
                for(int n_q = n; n_q >= 0; n_q--)
                    if(cnt_0 <= m_q and cnt_1 <= n_q)
                        dp[m_q][n_q] = max(dp[m_q][n_q], dp[m_q-cnt_0][n_q-cnt_1] + 1);
        }
        return dp[m][n];
    }
    
    int count(string &s)
    {
        int cnt_0{0};
        for(char c: s)
            cnt_0+= (c == '0');
        return cnt_0;
    }
};