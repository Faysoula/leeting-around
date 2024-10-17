class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n -1;i>=0;i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }

            //it only gets here if its 9
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};