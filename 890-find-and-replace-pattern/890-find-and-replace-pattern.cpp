class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        vector<string> res;

        int n = words.size(),m = pattern.size();

        for(int i=0;i<n;i++){

            if(words[i].size() == m){

             unordered_map<char,char> mp1;
             unordered_map<char,char> mp2;
             bool flag = true; 

                for(int j=0;j<m;j++){

                    auto it1 = mp1.find(pattern[j]);
                    auto it2 = mp2.find(words[i][j]);

                    if(it1 == mp1.end()){
                        mp1.insert({pattern[j],words[i][j]});
                    }else{
                        if(it1->second != words[i][j]){
                            flag = false;
                            break;
                        }
                    }

                    if(it2 == mp2.end()){
                        mp2.insert({words[i][j],pattern[j]});
                    }else{
                        if(it2->second != pattern[j]){
                            flag = false;
                            break;
                        }
                    }
                }

                if(flag){
                    res.push_back(words[i]);
                }
            }
        }
        return res;
    }
};
