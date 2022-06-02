// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool fun(vector<vector<int>>&mat,vector<vector<int>>&v,int i,int j,int n){
          if(i==n-1 && j==n-1){
              v[i][j]=1;
              return true;
          }
          if(i>=n ||j>=n || i<0 || j<0 || mat[i][j]==0) return false;
          
          v[i][j]=1;
          for(int k=1;k<=mat[i][j];k++){
              if(fun(mat,v,i,j+k,n)) return true;
              if(fun(mat,v,i+k,j,n)) return true;
          }
          v[i][j]=0;
          
          return false;
      }
vector<vector<int>> ShortestDistance(vector<vector<int>>&mat){
   
   int n=mat.size();
   vector<vector<int>>v(n,vector<int>(n,0));
   bool x=fun(mat,v,0,0,n);
   if(x==false) return {{-1}};
   
   else return v;
}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends