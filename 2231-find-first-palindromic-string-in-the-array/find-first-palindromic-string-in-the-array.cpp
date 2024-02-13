class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0;i<words.size();i++){
            if(ispalin(words[i])){
                return words[i];
            }
        }
        return "";
    }

    bool ispalin(string& a){
        int left = 0;
        int right = a.size() -1;
        while(left <= right){
            if(a[left] != a[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};