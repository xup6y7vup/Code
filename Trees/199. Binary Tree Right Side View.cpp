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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> res;
        if(!root) return res;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            stack<int> s;

            for(int i = q.size() ; i > 0 ;i--){
                TreeNode* node = q.front();
                q.pop();

                if(node){
                    s.push(node -> val);
                    q.push(node -> left);
                    q.push(node -> right);
                    //cout << s.top() << endl;
                }
            }

            if(!s.empty()){
                int right_most = s.top();
                res.push_back(right_most);
            }

        }
        return res;
    }
};
