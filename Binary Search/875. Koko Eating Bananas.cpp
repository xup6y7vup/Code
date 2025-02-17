class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int res = right;

        while(left <= right){
            int mid = (left + right) / 2;

            long long totaltime = 0;
            for(int p : piles){
                totaltime += ceil((double)(p) / mid);
            }
            if(totaltime <= h){
                res = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }

        return res;
    }
};
