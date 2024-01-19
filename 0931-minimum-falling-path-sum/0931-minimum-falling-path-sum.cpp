class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) {
        int n = m.size();
        for(int row = 1;row<n;row++){
            for(int col = 0;col<m[0].size();col++){
                m[row][col] += min(
                    m[row-1][max(0, col - 1)],
                    min(m[row-1][col],
                    m[row-1][min(n-1, col+1)])
                );
            }
        }
        return *min_element(m[n-1].begin(), m[n-1].end());
    }
};