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
    bool isBalanced(TreeNode* root) {
        bool isBa = true;
        dfs(root, isBa);
        return isBa;
    }
private:
    int dfs(TreeNode* root, bool& isBa){
        if(root == nullptr) return 0;

        int left = dfs(root -> left, isBa);
        int right = dfs(root -> right, isBa);
        if(abs(left - right) > 1){
            isBa = false;
        }

        return 1 + max(left, right);
    }

};
