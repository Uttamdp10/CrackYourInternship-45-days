class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        string curr = "";
            vector<string>temp;
            vector<vector<string>> ans;
            sort(products.begin(), products.end());
            for(auto c : searchWord){
                    curr += c;
                    temp.clear();
                    for(auto s : products){
                            if(s.substr(0,curr.length()) == curr)
                                    temp.push_back(s);
                            if(temp.size() == 3)
                                    break;                   
                    }
                    ans.push_back(temp);
            }
            return ans;
    }
};