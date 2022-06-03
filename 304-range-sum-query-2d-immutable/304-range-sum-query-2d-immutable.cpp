class NumMatrix {
public:
    vector<vector<int>> matrix; 
    
      NumMatrix(vector<vector<int>>& m)
      {
         for(int i = 0; i < m.size(); i++)
         {
                 for(int j = 1; j < m[0].size(); j++)
                 {
                         m[i][j]+=m[i][j-1];
                         // sum along row ------>
                 }
         }
            
         
                 for(int j = 0; j < m[0].size(); j++)
                 {
                         for(int i = 1; i < m.size(); i++)
         {
                         m[i][j]+=m[i-1][j];
                         // sum along column ↓
                 }
         }
            matrix = m;
      }
    
    
    int sumRegion(int row1, int col1, int row2, int col2) 
    {
            int r = 0, s = 0, t = 0;
            
            if(col1 - 1 >= 0)
            {
                    r = matrix[row2][col1 - 1];
            }
            
            if(row1-1 >= 0)
            {
                    s = matrix[row1-1][col2];
            }
            
            if(row1-1 >= 0 && col1-1 >= 0)
            {
                    t = matrix[row1-1][col1-1];
            }
        return matrix[row2][col2] - r - s + t;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */