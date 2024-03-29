class Solution {
public:
    string removeStars(string s) {
        stack<char> s1;
        for(int i = 0;i<s.size();i++){
            if(s[i] != '*'){
                s1.push(s[i]);
            }else if(!s1.empty()){
                s1.pop();
            }
        }
        string res = "";
        while(!s1.empty()){
            res += s1.top();
            s1.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};