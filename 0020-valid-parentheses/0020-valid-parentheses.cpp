class Solution {
public:
    bool isValid(string s) {
        stack<char> fe;
        for(int i = 0 ; i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                fe.push(s[i]);
            }else{
                if(fe.empty()){
                    return false;
                }
                char c = fe.top();
                if((s[i]=='}' && c=='{') || (s[i]==']' && c=='[') ||(s[i]==')' && c=='(')){
                    fe.pop();
                }else return false;
                    
            }
        }
        if(fe.empty()){
            return true;
        }else return false;
    }
};