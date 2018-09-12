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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.empty()) return NULL;
        int maxSub = 0;
        int max = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(max < nums[i]){
                maxSub = i;
                max = nums[i];
            }
        }
        
        TreeNode* root = new TreeNode(max);
        
        vector<int> nums1;
        vector<int> nums2;
        for(int i = 0; i < maxSub; i++){
            nums1.push_back(nums[i]);
        }
        for(int i = maxSub + 1; i < nums.size(); i++){
            nums2.push_back(nums[i]);
        }
        
        root->left = constructMaximumBinaryTree(nums1);
        root->right = constructMaximumBinaryTree(nums2);
        return root;
    }
};