class Solution
{
    public:
        int getLucky(string s, int k)
        {
            string alph = "";

            if (s.empty()) return 0;

            for (int i: s)
            {
                alph += to_string((int) i - 96);
            }
            int sum = 0;
            cout<< alph <<endl;
            for (int transform = 0; transform < k; transform++) {
                sum = 0;
                for(char c:alph){
                    sum += (int)c - 48;
                }

                alph = to_string(sum);
            }
            return sum;
        }
};