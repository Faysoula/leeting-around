class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> stringMap;

        for(auto i = 0; i<strs.size();i++){
            string word = strs[i];
            sort(word.begin(),word.end());
            stringMap[word].push_back(strs[i]);
        }

        vector<vector<string>> res;
        for(auto j = stringMap.begin();j!=stringMap.end();++j){
            res.push_back(j->second);
        }
        return res;
    }
};