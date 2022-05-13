class Solution {
public:
        
Node* findNext(Node *root)
{
while(root->next != NULL)
{
root = root->next;

        if(root->left != NULL)
            return root->left;
        if(root->right !=NULL)
            return root->right;
    }
    return NULL;
}
public:
Node* connect(Node* root)
{

    if(root == NULL)
        return NULL;
    
    if(root->left != NULL)
    {
        if(root->right != NULL)
            root->left->next = root->right;
        
        else
            root->left->next = findNext(root);
    }
    if(root->right!= NULL)
        root->right->next = findNext(root);
    
    connect(root->right);
    connect(root->left);
    return root;
}
};