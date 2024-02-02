class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> q;
        vector<int> res;
        for (int i = 1; i <= 8; ++i){
            q.push(i);
        }

        while(!q.empty()){
            int n = q.front();
            q.pop();
            if(n>=low && n<=high){
                res.push_back(n);
            }
            int digit = n % 10;
            if(digit < 9){
                q.push(n * 10 +(digit + 1));
            }

        }
        return res;
    }
};