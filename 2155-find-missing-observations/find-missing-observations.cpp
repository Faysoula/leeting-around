class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sum = (m + n) * mean;
        int msum = sum - accumulate(rolls.begin(), rolls.end(), 0);

        if(msum > 6 * n || msum < n){
            return {};
        }

        vector<int> res;

        while(n>0){
            int val = min(6, msum - n + 1);
            res.push_back(val);
            msum -= val;
            n--;
        }

        return res;
    }
};

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
