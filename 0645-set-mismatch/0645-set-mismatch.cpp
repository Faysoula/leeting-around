class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int n = nums.size();
       vector<bool> checks(n, false);
       int dup =0, sum = 0;
       for(int i = 0;i<n;i++){
           if(checks[nums[i]] == true){
               dup = nums[i];
           }
           checks[nums[i]] = true;
           sum += nums[i];
       }
       int nsum = n * (n+1)/2;
       return {dup, dup + nsum - sum};
    }
};