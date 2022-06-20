class Solution {
public:
    vector<int> xorQueries(vector<int>& A, vector<vector<int>>& queries) 
    {
      vector<int> ans; // create an answer vector to store output
        
        // STEP 1
        for(int i = 1; i < A.size(); i++) {  // in-place in array A
            A[i] = A[i-1]^A[i];   // store in-place XOR till current index 
        }
        // STEP 2
        for(int i = 0; i < queries.size(); i++) {
            int start = queries[i][0]; // first element of i th queries
            int end = queries[i][1];   // second element of i th queries
            
            if(start == 0) {   // if first element of i th queries is zero then just push in-place stored value at index end in array A
                ans.push_back(A[end]);
            }
            else {
                ans.push_back(A[start-1]^A[end]);  // if first element is not zero then push inplace value XOR first-1 th inplace value
            }
        }
        return ans;
       
    }
};