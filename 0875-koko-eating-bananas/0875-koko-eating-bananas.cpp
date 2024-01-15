class Solution {
public:
    long long banPerHour(vector<int>& piles, int h){
        long long tHour = 0;
        for(int i = 0; i<piles.size(); i++){
            int sum = ceil(piles[i]/(double)h);
            tHour += sum;
        }
        return tHour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = -1;
        int begin = 1;
        int end = *(max_element(piles.begin(), piles.end()));

        while ( begin <= end ){
            int mid = begin + (end - begin) / 2;
            
            long long sum = banPerHour(piles, mid);

            if(sum <= h){
                ans = mid;
                end = mid - 1;
            }else begin = mid + 1;
        }

        return ans;

    }
};