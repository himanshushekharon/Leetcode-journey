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
    void inorder(TreeNode* node, vector<int>& v){
        if(node==nullptr) return ;
        inorder(node->left,v);
        v.push_back(node->val);
        inorder(node->right,v);
        
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        inorder(root ,v);
        int l=0,h=v.size()-1;
        while(l<h){
            int sum=v[l]+v[h];
            if(sum==k){
                return true;
            }else if(sum>k){
                h--;
            }else{
                l++;
            }
        }
        return false;
    }
};