class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set s(nums1.begin(), nums1.end());
        vector<int> res;
        for(int i =0;i < nums2.size();i++){
            if(s.count(nums2[i]) > 0){
                res.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return res;
    }
};