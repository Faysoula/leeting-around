class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res(candies.size(),false);
        int maxcandy = *max_element(candies.begin(),candies.end());
        for(int i =0;i<res.size();i++){
            int temp = candies[i];
            
            if((candies[i]+ extraCandies) >=maxcandy){
                res[i] = true;
            }
        
        }
        return res;
    }
};