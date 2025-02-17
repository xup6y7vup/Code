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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool isSame = true;
        dfs(p, q, isSame);
        return isSame;
    }

private:
    void dfs(TreeNode* p, TreeNode* q, bool& isSame){
        
        if((!p && q) || (p && !q)){
            isSame = false;
            return;
        }

        if(!p && !q) return;

        if(p->val != q->val){
            isSame = false;
        }

        dfs(p->left, q->left, isSame);
        dfs(p->right, q->right, isSame);
        return;
    }


};
