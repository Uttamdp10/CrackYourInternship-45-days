// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string stringPartition(string S, int a, int b)
    {
        int n = S.length();
        for(int i = 1; i < n; i++) {
            string s1 = S.substr(0, i);
            string s2 = S.substr(i);
            int u = stoi(s1);
            int p = stoi(s2);
            if(u % a == 0 && p % b == 0) 
                return s1 + " " + s2;
        }
        
        return "-1";
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
}   // } Driver Code Ends