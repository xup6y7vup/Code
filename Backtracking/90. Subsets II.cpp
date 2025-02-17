class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> cur;
        dfs(cur, 0, nums);
        return res;
    }

    void dfs(vector<int>& cur, int start, vector<int>& nums){
        res.push_back(cur);


        for(int i = start ; i < nums.size() ; i++){
            if(i > start && nums[i] == nums[i-1])continue;

            cur.push_back(nums[i]);
            dfs(cur, i+1, nums);
            cur.pop_back();
        }


    }

};
