class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        cout<< words[0][0];

        set<char> letters(allowed.begin(), allowed.end());

        for(int i = 0; i< words.size(); i++){
            bool valid = true;
            for(int j = 0; j<words[i].size();j++){
                if(letters.find(words[i][j]) == letters.end()){
                    valid = false;
                    break;
                }
            }
            if(valid == true){

            count++;
            }
        }
        return count;
    }
};