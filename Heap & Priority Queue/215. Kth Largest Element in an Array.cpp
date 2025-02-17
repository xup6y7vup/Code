class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int max_k_num = 0;

        for(int i = 0 ; i < k - 1 ; i++){
            auto it = max_element(nums.begin(), nums.end());
            *it = -10001;
        }
        auto it = max_element(nums.begin(), nums.end());

        return *it;

    }
};