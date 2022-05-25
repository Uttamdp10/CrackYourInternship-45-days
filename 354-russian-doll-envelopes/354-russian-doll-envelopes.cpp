class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
		return a[0] < b[0] || (a[0] == b[0] && a[1]>b[1]); 
	}
	int maxEnvelopes(vector<vector<int>>& envelopes) {
		vector<int> lis;
		sort(envelopes.begin(),envelopes.end(),cmp);
		for(int i = 0 ; i < envelopes.size() ; i++){
			int l = 0,r = lis.size()-1;
			while(l <= r){
				int m = l + (r-l)/2;
				if(envelopes[i][1] > envelopes[lis[m]][1])
					l = m+1;
				else 
					r = m-1;
			}
			if(l == lis.size()){
				lis.push_back(i);
			}else{
				lis[l] = i;
			}
		}
		return lis.size();
	}
};