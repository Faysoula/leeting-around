
    class Solution
    {
        public:
            int integerBreak(int n)
            {
                if (n <= 3)
                {
                    return (n - 1);
                }
                int divideres = n / 3;
                int remainder = n % 3;
                if (remainder == 0)
                {
                    return pow(3, divideres);
                }
                if (remainder == 1)
                {
                int result = pow(3 ,(divideres - 1)) *4;
                return result;
                }
                return pow(3, divideres) *2;
            }
    };