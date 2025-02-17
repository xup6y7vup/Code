class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<bool> pick(nums.size(), false);
        vector<int> cur;
        dfs(cur, pick, nums);
        return res;
    }

    void dfs(vector<int>& cur, vector<bool>& pick, vector<int>& nums){
        if(cur.size() == nums.size()){
            res.push_back(cur);
            return;
        }

        for(int i = 0 ; i < nums.size() ; i++){
            if(!pick[i]){
                cur.push_back(nums[i]);
                pick[i] = true;
                dfs(cur, pick, nums);
                cur.pop_back();
                pick[i] = false;
            }
        }
        

    }
};
