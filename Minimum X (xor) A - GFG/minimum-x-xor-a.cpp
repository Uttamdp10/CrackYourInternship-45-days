// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b)
    {
        // code here
        
        int setBits=0,res=0;
         
          //To count number of set bits in b
        setBits= __builtin_popcount(b);
         
        //creating binary representation of a in stack s
        stack<short int> s;
        while(a>0)
        {
            s.push(a%2);
            a=a/2;
        }
         
 
        // Decrease the count of setBits
        // as in the required number set bits has to be
        // equal to the count of set bits in b
        //Creating nearest possible number in m in binary form.
        //Using vector as the number in binary for can be large.
        vector<short int> m;   
         
        while(!s.empty())
        {
            if(s.top()==1 && setBits>0)
            {
                m.push_back(1);
                setBits--;
            }
            else
            {
                m.push_back(0);
            }
            s.pop();
        }
         
        //Filling the unset bits from the least significant bit to the most significant bit
        //if the setBits are not equal to zero
        for(int i=m.size()-1;i>=0 && setBits>0;i--)
        {
            if(m[i]==0)
            {
                m[i]=1;
                setBits--;
            }
        }
         
         
        int mask;
        for(int i=m.size()-1;i>=0;i--)
        {
            mask=1<<(m.size()-i-1);
             
            res+=m[i]*mask;
        }
        int n=m.size();
         
        //if the number of setBits is still not equal to zero
        //dd the remaining number of set bits to the left of the most significant bit
        //in order to make set bits of m equal to the set bits of B.
         
        while(setBits>0)
        {
            res+=1<<n;
            n++;
            setBits--;
        }
         
        return res;
    }
 
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends