class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& og, int m, int n) {
        vector<vector<int>> ans;

        if(n * m != og.size()){
            return ans;
        }

        int row_count = 0;
        vector<int> temp;

        for(auto i:og){
            temp.push_back(i);
            row_count++;

            if(row_count == n){
                row_count = 0;
                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans;
    }
};