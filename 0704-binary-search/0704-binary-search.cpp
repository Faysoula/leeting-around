class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size() - 1;
        while(begin <= end){
            int middle = begin + (end - begin / 2);

            if(nums[middle] == target){
                return middle;
            }else if(nums[middle] < target){
                begin = middle + 1;
            }else {
                end = middle -1;
            }
        }
        return -1;
    }
};