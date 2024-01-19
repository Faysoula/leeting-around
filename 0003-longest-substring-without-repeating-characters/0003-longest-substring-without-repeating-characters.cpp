class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> un;
        int maxr = 0;
        int start = 0;
        for(int i = 0;i<s.size();i++){
            if(un.find(s[i]) == un.end()){
                un.insert(s[i]);
            }else{
                int n = un.size();
                maxr = max(maxr,n);
                while(s[start] != s[i]){
                    un.erase(s[start]);
                    start++;
                }
                start++; //tf????????
            }
        }

        maxr = max(maxr, static_cast<int>(un.size()));// for when theres only one element
        return maxr;
    }
};