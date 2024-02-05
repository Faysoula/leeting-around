class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr(26);
        for(auto i:s){
            arr[i - 'a']++;
        }
        for(int i =0 ;i<s.size();i++){
            if(arr[s[i]-'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};