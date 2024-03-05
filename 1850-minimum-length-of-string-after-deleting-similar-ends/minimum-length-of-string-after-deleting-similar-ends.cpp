class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left<right && s[left] == s[right]){
            char currchar = s[left];
            while(left<=right && s[left] == currchar){
                left++;
            }
            while(right>=left && s[right] == currchar){
                right--;
            }
        }
        return right - left + 1;
    }
};