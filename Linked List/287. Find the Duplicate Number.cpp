class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            if(nums[abs(nums[i]) - 1] > 0){
                nums[abs(nums[i]) - 1] *= -1;
            }else{
                return abs(nums[i]);
            }
            
        }
        return 0;
    }
};
