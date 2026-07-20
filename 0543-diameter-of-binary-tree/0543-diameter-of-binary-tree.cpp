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
private:
int mx=0;
    int height(TreeNode* node){
        if(node==nullptr) return 0;
        int leftheight=height(node->left);
        int rightheight=height(node->right);

        mx=max(mx,leftheight+rightheight);
        return 1+max(leftheight,rightheight);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        mx=0;
        height(root);
        return mx;
    }
};