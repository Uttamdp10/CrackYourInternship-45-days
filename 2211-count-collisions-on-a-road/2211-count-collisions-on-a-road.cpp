class Solution {
public:
    int countCollisions(string D) {//D is Direction string
        int n = D.size(), ans = 0;
		int i = 0 , j = n-1;
        while(i<=j and D[i] == 'L') i++;    // Cars on left going left => no colision
		while(i<=j and D[j] == 'R') j--;    // Cars on right going right => no colision
        for( ; i<=j ; i++) ans += (D[i] != 'S');  // Whether S collides or not it doesn't change answer , all other collide and change score
        return ans;
        }
        
    
};