// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        // code 
         long l = 1, r = M;
       
       while(l<r){
           long mid = l + (r-l)/2;
           long sum = 0;
           for(long i=0;i<N;i++)
               sum += (H[i]+A[i]*(mid))>=L?(H[i]+A[i]*(mid)):0;
           if(sum>=M)
               r = mid;
           else
               l = mid+1;
       }
       
       return r;
   
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends