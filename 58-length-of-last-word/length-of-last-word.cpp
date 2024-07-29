class Solution
{
    public:
        int lengthOfLastWord(string s)
        {
            int a = s.length() - 1;

            int len = 0;

            while(s[a] == ' '){
                a--;
            }

            while(a>=0 && s[a] != ' '){
                a--;
                len++;
            }
            return len;
        }
};