class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> a(nums.begin(), nums.end());
        if(nums.size()==a.size()){
            return false;
        }
        return true;
    }
    
};