class Solution
{
    public:
        bool isPalindrome(string s)
        {
            

            int begin = 0;
            int end = s.size() - 1;

            while(begin <= end){
                if(!isalnum(s[begin])){
                    begin++;
                    continue;
                }
                if(!isalnum(s[end])){
                    end--;
                    continue;
                }
                if(tolower(s[begin]) != tolower(s[end])){
                    return false;
                }
                begin++;
                end--;
            }

            return true;

        }
};