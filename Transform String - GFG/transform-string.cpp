// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {int ans=0;
       int s1 = 0;
       int s2 = 0;
       int m = A.length();
       int n = B.length();
       if(m!=n)
       return -1;
       
       for(int i=0;i<m;i++){
           s1 += (int)A[i];
       }
       for(int i=0;i<n;i++){
           s2 += (int)B[i];
       }
       if(s1 != s2){
           return -1;
       }

       
       int i= m-1, j=n-1;
       
       while(i>=0 && j>=0)
       {
           if(A[i]==B[j])
           i--,j--;
           else
           ans++,i--;
       }
       return ans;                                                                                                           
    
    }
};


// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends