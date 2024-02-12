class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int ptr1 = 0;
        int ptr2 = 0;
        while(ptr1<=s.size() && ptr2<=t.size()){
            if(s[ptr1] != t[ptr2]){
                break;
            }
            ptr1++;
            ptr2++;
        }
        return t[ptr2];

    }
};