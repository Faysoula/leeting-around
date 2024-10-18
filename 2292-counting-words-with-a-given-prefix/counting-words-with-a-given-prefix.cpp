class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res = 0;
        for(int i = 0; i< words.size();i++){
           string curr = words[i];
           int count = 0;
           for(int j = 0;j<pref.size();j++){
                if(curr[j] == pref[j]){
                    count++;
                }else {break;}
           }
           if(count == pref.size()){
            res++;
           }
        }
        return res;
    }
};