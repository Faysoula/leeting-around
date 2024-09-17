class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s = s1 + " " + s2;
        unordered_map<string, int> words;
        string tmp = "";
        for(auto& letter : s){
            if(letter == ' '){
                words[tmp]++;
                tmp = "";
            }else{
                tmp += letter;
            }
        }

        if(tmp != ""){
            words[tmp]++;
            tmp = "";
        }

        vector<string> ans;
        for(auto& val:words){
            if(val.second  == 1){
                ans.push_back(val.first);
            }
        }
        return ans;
    }
};