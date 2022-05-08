class NestedIterator {
public:
    int j=0,n=0;
    vector<int>v;
    void solve(vector<NestedInteger> &A)
    {
        for(int i=0;i<A.size();i++)
        {
            if(A[i].isInteger())
            {
                v.push_back(A[i].getInteger());
            }
            else
            {
                // vector<NestedInteger>ans;
                // ans.push_back(A[i].getList());
                solve(A[i].getList());
            }
        }
    }
    NestedIterator(vector<NestedInteger> &A) {
        solve(A);
        n=v.size();
        // for(int i=0;i<v.size();i++)
            // cout<<v[i]<<"\n";
    }

    int next() {
        j++;
        return v[j-1];
    }
    
    bool hasNext() {
        if(j==n)
            return false;
        return true;
    }
};