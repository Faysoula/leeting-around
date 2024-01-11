class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i =0; i< nums.size();i++){
            int target = -nums[i];
            int begin = i+1;
            int end = nums.size() - 1;
            while(begin < end){
                int sum = nums[begin] + nums[end];
                if(sum<target){
                    begin++;
                }else if(sum>target){
                    end--;
                }else{
                   vector<int> value = {nums[i],nums[begin],nums[end]};
                   res.push_back(value);

                   while(begin < end && nums[begin] == value[1]){
                       begin++;
                   }
                   while(begin < end && nums[end] == value[2]){
                       end--;
                   }
                }
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i]){
                i++;
            }
            
        }
        return res;
    }
};