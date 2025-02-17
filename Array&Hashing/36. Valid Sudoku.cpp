class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int n = board.size();
        int m = board[0].size();

        for(int i = 0 ; i < n; ++i){
            unordered_set<char> seen;
            for(int j = 0 ; j < m ; ++j){
                if(board[i][j] == '.') continue;
                if(seen.find(board[i][j]) != seen.end()){
                    
                    return false;
                }
                seen.insert(board[i][j]);
            }
            seen.clear();
        }

        for(int i = 0 ; i < n; ++i){
            unordered_set<char> seen;
            for(int j = 0 ; j < m ; ++j){
                if(board[j][i] == '.') continue;
                if(seen.find(board[j][i]) != seen.end()){
                   
                    return false;
                }
                seen.insert(board[j][i]);
            }
            seen.clear();
        }

        for(int i = 0 ; i < n ; i++){
            unordered_set<char> seen;
            for(int j = 0 ; j < 3 ; j++){
                for(int k = 0 ; k < 3 ; k++){
                    int row = (i/3)*3 +j;
                    int col = (i%3)*3 +k;
                    if(board[row][col] == '.') continue;
                    if(seen.find(board[row][col]) != seen.end()){
                        printf("false");
                        return false;
                    }
                    seen.insert(board[row][col]);
                }
            }
            seen.clear();
        }
        return true;
    }
};
