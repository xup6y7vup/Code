class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> set;
        dfs(nums, 0, target, set, res);
        return res;
    }

private:
    void dfs(vector<int>& nums,int i, int target, vector<int>& set, vector<vector<int>>& res){
        if(target == 0){
            res.push_back(set);
            return;
        }
        if(target < 0 || i >= nums.size()){
            return;
        }

        set.push_back(nums[i]);
        dfs(nums, i, target - nums[i], set, res);
        set.pop_back();
        dfs(nums, i+1, target, set, res);

    }

};
