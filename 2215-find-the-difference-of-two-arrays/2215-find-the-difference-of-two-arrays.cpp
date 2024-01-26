class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> on;
        vector<int> tw;
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());

        for(auto it: s1){
            if(s2.find(it) == s2.end()){
                on.push_back(it);
            }
        }

        for(auto it: s2){
            if(s1.find(it) == s1.end()){
                tw.push_back(it);
            }
        }

        ans.push_back(on);
        ans.push_back(tw);
        return ans;

    }

   
};