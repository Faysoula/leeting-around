class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long chalkforcycle = 0;
        for(int studentchalk:chalk){
            chalkforcycle += studentchalk;
        }

        int chalkleft = k % chalkforcycle;

        for(int student = 0; student < chalk.size(); student++){
            if(chalkleft < chalk[student]){
                return student;
            }
                chalkleft -= chalk[student]; 
        }
        return 0;  
    }
};