class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> lmul(n , 1);
        lmul[0] = 1;
        for(int i = 1 ; i < n ; i++){
            lmul[i] = lmul[i-1] * nums[i-1];
        }

        vector<int> rmul(n, 1);
        for(int i = n-2; i >= 0 ; i--){
            rmul[i] = rmul[i+1] * nums[i+1];
        }

        vector<int> result(n, 1);
        for(int i = 0 ; i < n ; i++){
            result[i] = lmul[i] * rmul[i];
        }
        return result;
    }
};
