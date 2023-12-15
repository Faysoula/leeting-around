class Solution
{
    public:
        int countStudents(vector<int> &students, vector<int> &sandwiches){
    int studentPrefCount[2] = { 0,
        0
    };

    for (int pref: students)
    {
        studentPrefCount[pref]++;
    }

    for (int i = 0; i < sandwiches.size(); ++i)
    {
        if (studentPrefCount[sandwiches[i]] > 0)
        {
            studentPrefCount[sandwiches[i]]--;
        }
        else
        {
            return sandwiches.size() - i;
        }
    }

    return 0;
}
};