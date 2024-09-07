class Solution {
public:
    int findComplement(int num) {
        string iniBin = bitset<32>(num).to_string();

        cout<< iniBin;

        iniBin = iniBin.substr(iniBin.find('1'));

        for(int i = 0;i<iniBin.size();i++){
            if(iniBin[i] == '1'){
                iniBin[i] = '0';
            }else {
                iniBin[i] = '1';
            }
        }

        int res = stoi(iniBin, NULL, 2);

        return res;
    }
};