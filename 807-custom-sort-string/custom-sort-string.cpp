class Solution {
public:
    string customSortString(string order, string s) {
        std::unordered_map<char,int> mp;
        for(char c:order){
            mp[c] = 0;
        }
        for(char c : s){
            if(mp.find(c) != mp.end()){
                mp[c]++;
            }
        }
        string news;
        for(char c: order){
            news.append(mp[c] , c);
        }

        for(char c: s){
            if(mp.find(c) == mp.end()){
                news.push_back(c);
            }
        }
        return news;

    }
};