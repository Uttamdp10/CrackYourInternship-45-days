/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode* reversekro(ListNode *head){
    ListNode* curr = head,*prev = NULL,*next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
   if(!l1 and !l2)return NULL;
    if(!l1)return l2;
    if(!l2)return l1;
    l1 = reversekro(l1);
    l2 = reversekro(l2);
    ListNode* headd = new ListNode(0);
    ListNode* temp = headd;
    int carry =0;
    while(l1 or l2 or carry){
        int sum =0;
        if(l1){
            sum+=l1->val;
            l1 = l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2 = l2->next;
        }
        sum+=carry;
        carry = sum/10;
        ListNode* newnode = new ListNode(sum%10);
        temp->next = newnode;
        temp = temp->next;
        
    }
    headd = reversekro(headd->next);
    return headd;
    
}
};