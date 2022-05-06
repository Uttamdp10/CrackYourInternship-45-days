class Solution {
public:
    string removeDuplicates(string s, int k) {
						//char freq
        stack<pair<char,int>> st;

		//add characters of s into stack (reverse way)
        for (int i = s.size() - 1; i >= 0; i--){
            char c = s[i];
			//if stack is empty or top value is not equal to c
            if (st.empty() || st.top().first != c)
                st.push({c,1});
			//if top value is equal to c
            else{
				// increase the frequency st.top by 1
                auto prev = st.top();
                st.pop();
                prev.second++;
                st.push(prev);
            }
            //if the frequency is equal to k remove it
            if (st.top().second == k)
                st.pop();
        }
        
        string res = "";
        
		//add value of stack into res
        while(!st.empty()){
            auto curr = st.top();
            st.pop();
            
            while(curr.second--)
                res+= curr.first;
            
        }
        
        return res;
    }
};