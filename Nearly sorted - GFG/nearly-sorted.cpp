// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int n, int k)
    {
        // Your code here
       priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>Ans;
        for(int i=0;i<n;i++)
        {   
            if(i<k)
            pq.push(arr[i]);
            else
            {
                pq.push(arr[i]);  // push
                Ans.push_back(pq.top()); // extract top->min
                pq.pop(); //pop the smallest element
            }
        }
         
         while(!pq.empty())
         {
             Ans.push_back(pq.top()); // extract top->min
                pq.pop();
         }
        return Ans;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends