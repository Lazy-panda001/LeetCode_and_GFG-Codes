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
    vector<int> rightSideView(TreeNode* root) 
    {
      vector<int> res;
      
      if(root == nullptr)
    {
        return res;
    }
    queue<TreeNode*> qu;
       
    qu.push(root);
      
    while(!qu.empty())
    {
        int len = qu.size();
        for(int i=0; i<len; i++)
        {
            TreeNode* curr = qu.front();
          
            qu.pop();
          
            if(i==0)
            {
                res.push_back(curr->val);
            }
                if(curr->right) qu.push(curr->right); // exchange this two line for Left View
                if(curr->left) qu.push(curr->left);     
            
        }
    }
    return res;
        
      
    }
};