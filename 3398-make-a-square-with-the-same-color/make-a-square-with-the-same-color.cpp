class Solution
{
    public:
        bool canMakeSquare(vector<vector < char>> &g)
        {
            for (int i = 0; i < 2; i++)
            {
                int bcount = 0;
                int wcount = 0;
                for (int j = 0; j < 2; j++)
                {
                    vector<char> pos = { g[i][j],
                        g[i + 1][j],
                        g[i][j + 1],
                        g[i + 1][j + 1]
                    };
                    wcount = count(pos.begin(), pos.end(), 'B');
                    bcount = count(pos.begin(), pos.end(), 'W');
                if (bcount >= 3 || wcount >= 3)
                {
                    return true;
                }
                }
            }
            return false;
        }
};