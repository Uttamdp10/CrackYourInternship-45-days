class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL||head==NULL)
            return true;
        vector<int> v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        
        
            int size=v.size();
        int first=0;
        int second=size-1;
        while(first<second)
        {
            if(v[first]!=v[second])
            {
                return false;
            }
            first++;
            second--;
        }
        return true;
    }
};