class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == val){
                nums.erase(nums.begin()+(i--));
                nums.push_back(val+1);
                k++;
            }
        }
        return (nums.size()-k);
    }
};