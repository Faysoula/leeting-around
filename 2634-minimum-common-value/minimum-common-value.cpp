class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int first = 0;
        int scnd = 0;
        while(first < nums1.size() && scnd < nums2.size()){
            if(nums1[first] == nums2[scnd]){
                return nums1[first];
            }else if(nums1[first] < nums2[scnd]){
                first++;
            }else scnd++;
        }
        return -1;
    }
};