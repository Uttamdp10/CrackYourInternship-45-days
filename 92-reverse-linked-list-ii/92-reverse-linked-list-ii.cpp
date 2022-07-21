class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || right==left)
            return head;
        int count = right-left;
		
		// The only trick is to handle the cuts now.
		// Once we reverse the list, we need to join the first part to the end and then join the end to the first
		// Basically [1,2,3,4,5] l=2, r=4, then the cut part is [2,3,4] so we just need to join 1->4 and 2->5 so finally it becomes [1,4,3,2,5]
		// This becomes tricky when l=1 since we would need to update the head as well
        
        ListNode* current = head;   // This will the current node.
        
        // This node will always point to the node before the "reversed" set of nodes. 
        // This node is important because this has to be pointed to the last node after reversal
        ListNode* prev = head;      
        
        // This node will point to the first current from where we start the reversal. 
        // We need this node because this node would be the last reversed node so we need to connect it with the nodes further
        ListNode* first_current = head;
        
        left--;
        while(left--){
            prev = current;
            current = current->next;
        }
        first_current = current;
        
        ListNode* nextNode = current->next;
        ListNode* nextNextNode;
        
        while(nextNode != NULL && count--){
            nextNextNode = nextNode->next;  // Save the nextnextNode address since while we reverse the direction, we would lose it.
            nextNode->next = current;       // Reverse the arrow
            current = nextNode;             // Move current ahead
            nextNode = nextNextNode;        // Move next Node ahead
        }
        
        // Now current would point to the last node which has been reversed
        // nextNode would point to the node ahead of it OR NULL if current if the last node (right == last node)
        
        // We need first current node to point to the nextNode so that after reversal of nodes, we connect with the later part of the nodes (which are after the reversal part) to the first node (which after reversal became the last node)
        first_current->next = nextNode;            
        
        // THIS IS VERY IMPORTANT AND TRICKY. THIS IS THE ONLY TRICK IN THIS PROBLEM
        // The issue is how do we identify if we have to update the head to current OR prev->next to current ??
        // For this, we check that if prev->next is already updated to the nextNode, then head->current
        // If not, then we know that there is a prev node whose next is to be assigned to the current node
        if (prev->next == nextNode){
            head = current;
        }
        else{
            prev->next = current;
        }
        
        return head;
    }
};