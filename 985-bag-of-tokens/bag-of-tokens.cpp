class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score = 0, curr = 0,cheap = 0,exp = tokens.size() - 1;
        while(cheap<=exp){
            if(power >= tokens[cheap]){
                power -= tokens[cheap++];
                score = max(score,++curr);
            }else if(curr > 0){
                curr--;
                power += tokens[exp--];
            }else{
                break;
            }
        }
        return score;
        
    }
};