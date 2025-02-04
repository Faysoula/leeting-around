class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0];
        int currMax = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i-1] < nums[i]){
             maxSum += nums[i];
            }else{
                maxSum =0;
                maxSum += nums[i];
            }
            
            if(maxSum > currMax){
               currMax = maxSum;
            }
            
        }
        return currMax;
    }
};