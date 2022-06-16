// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
   {
       // Your code goes here   
       set<char> s;
       //find number of distinct chars
       for(int i=0;i<str.length();i++){
           s.insert(str[i]);
       }
       int ans = INT_MAX;
       int size = s.size();
       int count = 0;
       //store the number of occurence of chars 
       unordered_map<char,int> mp;
       int i = 0,j=0;
       while(j<str.length()){
           if(!mp[str[j]])count++;
           mp[str[j]]++;
           while(count == size and mp[str[i]]>1){
               mp[str[i]]--;
               i++;
           }
           if(count == size)ans = min(ans,j-i);
           j++;
       }
       return ans+1;
   }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends