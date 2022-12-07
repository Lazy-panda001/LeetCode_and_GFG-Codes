/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int root_sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        if(root == nullptr)
        {
            return 0;
        }
        
        if(root->val > low and root->val < high)
        {
            root_sum += root->val;
        }
        
        rangeSumBST(root->left, low, high);
        rangeSumBST(root->right , low, high);
        
        return (root_sum + low + high);
        
    }
};