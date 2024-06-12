class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> mi(heights.begin(), heights.end());

        sort(mi.begin(),mi.end());

        int count = 0;

        for(int i = 0; i < mi.size(); i++){
            if(mi[i] != heights[i]){
                count++;
            }
        }

        return count;
    }
};