class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
    {
       vector<pair<int,int>> sde;
       vector<vector<int>>v;
            
           for(int i = 0; i < points.size(); i++)
           {
                   int d = points[i][0]*points[i][0] + points[i][1] * points[i][1];
                   sde.push_back({d,i});
           }
           sort(sde.begin(), sde.end()); 
            for(int i=0;i<k;i++)
        {
            v.push_back(points[sde[i].second]);
        }
        
        return v;
    }
};