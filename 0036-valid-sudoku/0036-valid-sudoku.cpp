class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //awal shi check the rows
        for(int row =0;row<9;row++){
            unordered_set<int> rowcheck;
            for(int col =0;col<9;col++){
                //if its a number, and its found in the set
                if(board[row][col] != '.' && rowcheck.find(board[row][col]) != rowcheck.end()){
                    return false;
                }
                rowcheck.insert(board[row][col]);
            }
        }

        //then check the cols
        for(int col =0;col<9;col++){
            unordered_set<int> colcheck;
            for(int row =0;row<9;row++){
                //if its a number, and its found in the set
                if(board[row][col] != '.' && colcheck.find(board[row][col]) != colcheck.end()){
                    return false;
                }
                colcheck.insert(board[row][col]);
            }
        }

        //now for the 3 by 3 matricies we use the rule r/3 * 3 + c/3
        //we use a vector of sets to store the values for each matrix
        
        vector<unordered_set<int>> mats(9);
        for(int row = 0; row<9;row++){
            for(int col =0;col<9;col++){
                int ind = (row/3) * 3 + col/3;
                if(board[row][col] != '.' && mats[ind].find(board[row][col]) != mats[ind].end()){
                    return false;
                }
                mats[ind].insert(board[row][col]);
            }
        }
        return true;
    }
};