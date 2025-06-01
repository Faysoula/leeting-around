class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m;i<nums1.size();i++){
            if(nums2.size()>0 && n != 0){
                n--;
                nums1[i] = nums2[n];
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};