class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int col = matrix[0].size() -1;

        while(row< matrix.size() && col > -1){
            int curr = matrix[row][col];
            if(curr == target){return true;}
            if(target > curr){
                row++;
            }else col--;
        }
        return false;
    }
};
