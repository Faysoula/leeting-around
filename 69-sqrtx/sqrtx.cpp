class Solution {
public:
    int mySqrt(int x) {
        int left  = 0;
        int right = x;
        int mid = 0;
        int ans = 0;
        while(left <= right){
            mid = (left + right) / 2;
            long long mult = 1LL * mid * mid;
            if(mult > x){
                right = mid -1;
            }else{
                ans = mid;
                left = mid+1;
            }
        }
        return ans;
    }
};