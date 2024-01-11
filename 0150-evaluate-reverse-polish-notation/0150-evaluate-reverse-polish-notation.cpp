class Solution
{
    public:
        int evalRPN(vector<string> &nums)
        {
            stack<int> s;

            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == "+" || nums[i] == "-" || nums[i] == "*" || nums[i] == "/")
                {
                    int second = s.top();
                    s.pop();
                    int first = s.top();
                    s.pop();
                    switch (nums[i][0])
                    {
                        case '+':
                            s.push(first + second);
                            break;
                        case '-':
                            s.push(first - second);
                            break;
                        case '*':
                            s.push(first *second);
                            break;
                        case '/':
                            s.push(first / second);
                            break;
                    }
                }else
                    s.push(stoi(nums[i]));
            }
            return s.top();
        }
};