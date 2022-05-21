// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr)
    {
        //code here
        vector<int>v;
       
         int flag = 0; 
        for(int j = 0; j < N; j++)
        {
             int flag = 0; 
            for(int i = N-1; i >j; i--)
            {
                if(Arr[i] < Arr[j])
               {
                   flag = 1;
                v.push_back(i);
                break;
               }
            }
            if(flag == 0) v.push_back(-1);
        }
        return v;
        
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends