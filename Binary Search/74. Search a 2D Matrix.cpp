class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        int top = 0, bot = ROWS - 1;
        while(top <= bot){
            int row = (top + bot) / 2;
            if(target > matrix[row][COLS - 1]){
                top = row + 1;
            }else if(target < matrix[row][0]){
                bot = row - 1;
            }else{
                break;
            }
        }

        if(!(top <= bot)){
            return false;
        }
        
        int row = (top + bot) / 2;
        int left = 0; 
        int right = COLS - 1;

        while(left <= right){
            int mid = (left + right) / 2;

            if(target < matrix[row][mid] ){
                right = mid - 1;
            }else if( target > matrix[row][mid]){
                left = mid + 1;
            }else{
                return true;
            }
        }
        return false;
    }
};
