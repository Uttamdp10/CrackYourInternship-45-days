class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) 
    {
        map<int,int> same_suit;
        map<int,int> same_rank;
        for(int i=0; i<ranks.size(); i++)
        {
            same_suit[suits[i]-'a']++; //storing count of same char
            same_rank[ranks[i]]++; //storing count of same rank
        }
        
        int three=0, pair_=0;
        for(int i=0; i<ranks.size(); i++)
        {
			//apply operations as per the condition given 
            if(same_suit[suits[i] - 'a'] > 4) 
                return "Flush";
            
            else if(same_rank[ranks[i]] > 2)
                three=1;
            
            else if(same_rank[ranks[i]] > 1)
                pair_=1;
        }
        
        if(three) return "Three of a Kind";
        else if(pair_) return "Pair";
        return "High Card";
        
    }
};