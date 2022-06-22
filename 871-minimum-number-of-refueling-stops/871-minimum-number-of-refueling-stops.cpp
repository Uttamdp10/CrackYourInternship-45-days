class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) 
    {
       int max_u_can_reach = startFuel;
       int count = 0;
       int index = 0;     
            priority_queue<int>pq;
            while(max_u_can_reach < target)
            {
                    while(index < stations.size() && stations[index][0] <= max_u_can_reach)
                    {
                            pq.push(stations[index][1]);
                            index++;
                    }
                    
                    if(pq.empty()) return -1;
                    
                    max_u_can_reach += pq.top();
                    pq.pop();
                    count++;
            }
            return count;
    }
};