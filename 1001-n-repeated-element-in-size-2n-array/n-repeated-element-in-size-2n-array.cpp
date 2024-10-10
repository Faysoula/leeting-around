class Solution
{
    public:
        int repeatedNTimes(vector<int> &nums)
        {
            map<int, int> reps;

            int n = nums.size() / 2;

            for(int i:nums){
                reps[i]++;
            }

            for(auto&i:reps){
                if(i.second == n){
                    return i.first;
                }
            }
            return 0;
        }
};