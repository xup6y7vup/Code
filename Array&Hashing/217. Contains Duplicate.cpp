class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> hashMap;

        for(auto num : nums){
            if(hashMap[num] == 1){
                return true;
            }
            hashMap[num]++;
        }

        return false;

    }
};