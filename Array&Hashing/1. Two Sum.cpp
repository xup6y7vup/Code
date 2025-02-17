class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> hashmap;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            int compliment = target - nums[i];
            if(hashmap.count(compliment)){
                return {hashmap[compliment], i};
            }
            hashmap[nums[i]] = i;
        }

        return {};
    }
};
