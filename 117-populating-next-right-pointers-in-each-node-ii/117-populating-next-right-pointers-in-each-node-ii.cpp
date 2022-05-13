class Solution {
public:
    Node* connect(Node* root) {
       if(root==NULL)
       {
           return NULL;           
       }
       queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                Node* front=q.front();
                q.pop();
                if(i<size-1)
                {
		front->next=q.front();       //if q has more than one element in it ,then point popped ele to curr front ele
				}
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
            }
        }
        return root;
    }
};