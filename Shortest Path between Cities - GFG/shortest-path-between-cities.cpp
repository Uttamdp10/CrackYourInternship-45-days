// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
  
        int shortestPath(int n,int m)
{
    // swap to keep n smallest
 
    if (n > m) {
        swap(n, m);
    }
 
    // a,b is level of n and m
    int a = log2(n);
    int b = log2(m);
 
    // divide until n!=m
    while (n != m)
    {
        if (n < m)
            m = m >> 1;
 
        if (n > m)
            n = n >> 1;
    }
 
    // now n==m which is the LCA of n ,m
 
    int v = log2(n);
 
    return  a + b - 2 * v;
}
  
        
    
    
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<< ob.shortestPath(x,y) << endl;
    }
    return 0; 
}   // } Driver Code Ends