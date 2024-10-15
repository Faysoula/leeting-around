class Solution
{
    public:
        vector<int> findWordsContaining(vector<string> &words, char x)
        {
            vector<int> res;

            for (int i = 0; i < words.size(); i++){
                string word = words[i];
                size_t found = word.find(x);
                if(found != string::npos){
                    res.push_back(i);
                }
            }
            return res;
        }
};