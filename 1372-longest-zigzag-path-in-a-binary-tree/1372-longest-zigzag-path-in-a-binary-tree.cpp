class Solution {
public:
    int ans=0;
    void dfs(TreeNode* root, int pleft, int pright){
        if(root==NULL) return ;
        if(root->right){
            ans = max(ans, pleft+1);
            dfs(root->right, 0, pleft+1); 
        }
        if(root->left){
            ans = max(ans, pright+1);
            dfs(root->left, pright+1, 0);
            
        }
    }
    int longestZigZag(TreeNode* root) {
        dfs(root, 0, 0);
        return ans;
    }
};