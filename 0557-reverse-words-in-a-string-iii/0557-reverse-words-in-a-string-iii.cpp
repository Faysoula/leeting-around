class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = 0;
        string result = "";

        while(right<s.size()){
            while(right < s.size() && !isspace(s[right]) ){
                right++;
            }

            for (int i = right - 1; i >= left; i--) {
                result += s[i];
            }
            
            if (right < s.size()) {
                result += " ";
            }

            left = right + 1;
            right= left;
        }
        return result;
    }
};