/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int getLeftHeight(TreeNode* root){
        int x = 0;
        while(root != NULL){
            x++;
            root = root->left;
        }
        return x;
    }
    
    int getRightHeight(TreeNode* root){
        int x = 0;
        while(root != NULL){
            x++;
            root = root->right;
        }
        return x;
    }
    
    int countNodes(TreeNode* root) {
        if(getLeftHeight(root) == getRightHeight(root))
            return pow(2,getLeftHeight(root)) - 1;
        else{
            int xl = 0, xr = 0;
            if(root != NULL){
            if(root->left != NULL)
                xl = countNodes(root->left);
            if(root->right != NULL)
                xr = countNodes(root->right);
            }
        
            return 1 + xl + xr;
        }
        
    }
};