class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;

        while( left < right){

            int w = right - left;
            int h = min(height[left], height[right]);
            int area = w*h;

            max_area = max(max_area, area);

            if(height[left] <= height[right]){
                left++;
            }else{
                right--;
            }

        }
       
        return max_area;

    }
};