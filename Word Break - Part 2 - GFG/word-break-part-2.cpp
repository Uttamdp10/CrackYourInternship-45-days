// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
        // code here
         unordered_set<string>dictionary;
    vector<string>ans;
    void solve(int index, string& temp, string& str){
        if(index>=str.size()){
            temp.pop_back();// last main extra space remove hogi
            ans.push_back(temp);
            temp.push_back(' ');//put space for next iteration
        }
        string curr=temp;
        for(int i=index;i<str.size();i++){
            string x=str.substr(index, i-index+1);
            if(dictionary.find(x)!=dictionary.end()){
                temp+=x;
                temp.push_back(' ');
                solve(i+1, temp, str);
                temp=curr;
            }
        }
        
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        
        ans.clear();
        for(string word:dict){
            dictionary.insert(word);
        }
        
        string temp="";
        solve(0, temp, s);
        return ans;
    }
    
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends