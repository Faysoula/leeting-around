class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> lossCount;
        vector<int> zero, one;
        for(int i = 0; i< matches.size() ;i++){

            int winner = matches[i][0];
            int loser = matches[i][1];
            
            
            lossCount[winner];
            lossCount[loser]++;
        }

        for(auto it = lossCount.begin(); it != lossCount.end();it++){
            int player = it->first;
            int losses = it->second;

            if(losses == 0){
                zero.push_back(player);
            }else if(losses == 1){
                one.push_back(player);
            }
        }


        return {zero , one};
    }
};