class Solution {
public:
    int minBitFlips(int start, int goal) {
        string start_binary = bitset<32>(start).to_string();
        string goal_binary = bitset<32>(goal).to_string();

        int ctr = 0;

        for(int i = 0; i<goal_binary.size();i++){
            if(start_binary[i] != goal_binary[i]){
                ctr++;
            }
        }
        return ctr;
    }
};