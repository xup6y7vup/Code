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
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        dfs(root, res);
        return res;
    }

private:
    int dfs(TreeNode* root, int& res){
        if(root == nullptr) return 0;

        int left = dfs(root -> left, res);
        int right = dfs(root -> right, res);
        int dia = left + right;
        if(dia > res){
            res = dia;
        }

        return 1 + max(left, right); 
    }

};
