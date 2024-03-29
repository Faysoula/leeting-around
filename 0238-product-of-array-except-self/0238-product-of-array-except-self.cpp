class Solution
{
    public:
        vector<int> productExceptSelf(vector<int> &nums){
            int n = nums.size();
            vector<int> outp(n);
            outp[0] = 1;
            for(int i = 1; i<n;i++){
                outp[i] = outp[i-1] * nums[i-1];
            }
            int right = 1;
            for(int i = n-1;i>=0;i--){
                outp[i] *= right;
                right *= nums[i];
            }
        return outp;
        }
};