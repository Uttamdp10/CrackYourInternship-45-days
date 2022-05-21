// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findTime(string S1, string S2)
    {
         unordered_map<char,int> mapping;
       
       // we do a mapping of every character at index.
       for(int i = 0; i<26; i++)
       {
           mapping[S1[i]] = i;
       }
       
       int sum = 0;    // to calculate total time
       
       // initially we are index 0
       int index = 0;
       
       for(auto i : S2)
       {
           sum += abs(index - mapping[i]);
           index = mapping[i];
       }
       
       return sum;
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends