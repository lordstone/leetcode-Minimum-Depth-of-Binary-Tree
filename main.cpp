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
    
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root -> left == NULL && root -> right == NULL) return 1;
        int left = (root -> left == NULL ? INT_MAX : minDepth(root -> left)+1);
        int right = (root -> right == NULL ? INT_MAX : minDepth(root -> right)+1);
        return min(left , right);
    }
};
