class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxnb = 0;
        std::unordered_map<int, int> mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int cmax = numeric_limits<int>::min();
        for(auto it : mp){
            cmax = max(cmax,it.second);
        }
        int count = 0;
        for(auto it : mp){
            if(it.second == cmax){
                count++;
            }
        }
        return count * cmax; 
    }
};