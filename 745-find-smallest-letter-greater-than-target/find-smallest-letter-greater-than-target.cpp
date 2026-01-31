class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0, high = letters.size()-1, ans = 0;
        while (low <= high){
            int mid = (low+high)/2;
            
            if (letters[mid]>target) ans = mid;
            
            if (letters[mid] > target) high = mid-1;
            
            else low = mid+1;
        }
        return letters[ans];
    }
};