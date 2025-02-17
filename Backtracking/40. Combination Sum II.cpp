class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> cur;
        dfs(cur, 0, target, candidates);
        return res;
    }

    void dfs(vector<int>& cur, int i, int target, vector<int>& candidates){
        if(target == 0 && find(res.begin(), res.end(), cur) == res.end()){
            res.push_back(cur);
            return;
        }
        if(target < 0 || i >= candidates.size()){
            return;
        }

        cur.push_back(candidates[i]);
        dfs(cur, i+1, target - candidates[i], candidates);
        cur.pop_back();
        dfs(cur, i+1, target, candidates);

    }

};
