class Solution {
public:
    string frequencySort(string s) {
       map<char,int> ini;
       multimap<int, char> freqmap;
       string res = "";

       for(auto it:s){
           ini[it]++;
       }

       for(auto it:ini){
           freqmap.insert({it.second, it.first});
       }

       for(auto it = freqmap.rbegin(); it != freqmap.rend(); it++){
           for(int i = 0; i< it->first;i++){
               res += it->second;
           }
       }
       return res;
    }
};